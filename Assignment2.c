#include <stdio.h>
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include "sccharts.h"
#include "sys/alt_alarm.h"
#include "stdbool.h"

//DEFINE Variables
#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 900
#define LED_VALUE 50


//Global variables:
int VSense_read = 0;
int VSense_Flag = 0;
int ASense_read = 0;
int ASense_Flag = 0;

int VRP_Flag = 0;
int PVARP_Flag = 0;
int AVI_Flag = 0;

int Vprev = 0;
int Aprev = 0;
//================================== LED Timer V =================================
alt_alarm LED_TimerV;
int LED_ex_FlagV = 0;
void* LED_ContextV = (void*) &LED_ex_FlagV;

alt_u32 VLED_ISR(void* context){
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b000000);
	return 0;
}

//================================== LED Timer A =================================
alt_alarm LED_TimerA;
int LED_ex_FlagA = 0;
void* LED_ContextA = (void*) &LED_ex_FlagA;

alt_u32 ALED_ISR(void* context){
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b000000);
	return 0;
}

//================================== VRP Timer =================================
alt_alarm VRP_Timer;
int VRP_ex_Flag = 0;
void* VRP_Context = (void*) &VRP_ex_Flag;

alt_u32 VRP_ISR(void* context){
	VRP_ex_Flag = 1;
	return 0;
}

//================================== PVARP Timer =================================
alt_alarm PVARP_Timer;
int PVARP_ex_Flag = 0;
void* PVARP_Context = (void*) &PVARP_ex_Flag;

alt_u32 PVARP_ISR(void* context){
	PVARP_ex_Flag = 1;
	return 0;
}

//================================== AVI Timer =================================
alt_alarm AVI_Timer;
int AVI_ex_Flag = 0;
void* AVI_Context = (void*) &AVI_ex_Flag;

alt_u32 AVI_ISR(void* context){
	AVI_ex_Flag = 1;
	return 0;
}

//================================== AEI Timer =================================
alt_alarm AEI_Timer;
int AEI_ex_Flag = 0;
void* AEI_Context = (void*) &AEI_ex_Flag;

alt_u32 AEI_ISR(void* context){
	AEI_ex_Flag = 1;
	return 0;
}

//================================== LRI Timer =================================
alt_alarm LRI_Timer;
int LRI_ex_Flag = 0;
void* LRI_Context = (void*) &LRI_ex_Flag;

alt_u32 LRI_ISR(void* context){
	LRI_ex_Flag = 1;
	return 0;
}

//================================== URI Timer =================================
alt_alarm URI_Timer;
int URI_ex_Flag = 0;
void* URI_Context = (void*) &URI_ex_Flag;

alt_u32 URI_ISR(void* context){
	URI_ex_Flag = 1;
	return 0;
}




int main()
{
  reset();

  while(1){
	  //Fetch button inputs
	  VRP_ex = VRP_ex_Flag;
	  PVARP_ex = PVARP_ex_Flag;
	  AVI_ex = AVI_ex_Flag;
	  AEI_ex = AEI_ex_Flag;
	  LRI_ex = LRI_ex_Flag;
	  URI_ex = URI_ex_Flag;


//===================== A and V sense ======================================
	  VSense_read = !(IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE)&0x1);
	  ASense_read = !(IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE)&0x2);

	  if (VSense_read == 1 && Vprev == 0){
		  VSense_Flag = 1;
	  }
	  if (ASense_read == 1 && Aprev == 0){
	  		  ASense_Flag = 1;
	  	  }
	  VSense = VSense_Flag;
	  ASense = ASense_Flag;
	  Vprev = VSense_read;
	  Aprev = ASense_read;

	  if(VSense_Flag == 1 && !VRP_Flag){
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b000001);
		  alt_alarm_start(&LED_TimerV, LED_VALUE, VLED_ISR,LED_ContextV);
	  }
	  if(ASense_Flag == 1){
		  printf("A Sensed\n");

		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b000010);

		  alt_alarm_start(&LED_TimerA, LED_VALUE, ALED_ISR,LED_ContextA);
		  printf("Timer started\n");
	  }
//===========================================================================

	  //======================= EXPIRE ============================
	  if (VRP_ex){
		  VRP_ex_Flag = 0;
		  VRP_Flag = 0;
		  alt_alarm_stop(&VRP_Timer);
		  //printf("VRP Timer expired\n");
	  }
	  if (PVARP_ex){
		  PVARP_ex_Flag = 0;
		  PVARP_Flag = 0;
		  alt_alarm_stop(&PVARP_Timer);
		  //printf("PVARP Timer expired\n");
	  }
	  if (AVI_ex && AVI_Flag){
		  AVI_ex_Flag = 0;
		  alt_alarm_stop(&AVI_Timer);
		  AVI_Flag = 0;
		  printf("AVI Timer expired\n");
	  }
	  if (AEI_ex){
		  AEI_ex_Flag = 0;
		  alt_alarm_stop(&AEI_Timer);
		  //printf("AEI Timer expired\n");
	  }
	  if (LRI_ex){
		  LRI_ex_Flag = 0;
		  alt_alarm_stop(&LRI_Timer);
		  //printf("LRI Timer expired\n");
	  }
	  if (URI_ex){
		  URI_ex_Flag = 0;
		  alt_alarm_stop(&URI_Timer);
		  //printf("URI Timer expired\n");
	  }


	  tick();

	  VSense_Flag = 0;
	  ASense_Flag = 0;
	  //Do outputs

	  if (VPace){
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b010000);
		  alt_alarm_start(&LED_TimerV, LED_VALUE, ALED_ISR,LED_ContextA);
		  //printf("V paced\n");
	  }


	  if (APace){
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0b100000);
		  alt_alarm_start(&LED_TimerA, LED_VALUE, ALED_ISR,LED_ContextA);
		  printf("A paced\n");
	  }

	  //======================= START ============================
	  if (VRP_start){
		  alt_alarm_start(&VRP_Timer, VRP_VALUE, VRP_ISR,VRP_Context);
		  VRP_Flag = 1;
		  //printf("VRP Timer started\n");
	  }

	  if(PVARP_start){
		  alt_alarm_start(&PVARP_Timer, PVARP_VALUE, PVARP_ISR,PVARP_Context);
		  PVARP_Flag = 1;
		  //printf("PVRAP Timer started\n");
	  }

	  if(AVI_stop && AVI_Flag){
		  alt_alarm_stop(&AVI_Timer);
		  AVI_Flag = 0;
		  printf("AVI Timer stopped\n");
	  }
	  if(AVI_start && !AVI_Flag){
		  alt_alarm_start(&AVI_Timer, AVI_VALUE, AVI_ISR,AVI_Context);
		  AVI_Flag = 1;
		  printf("AVI Timer started\n");
	  }

	  if(AEI_start){
		  alt_alarm_start(&AEI_Timer, AEI_VALUE, AEI_ISR,AEI_Context);
		  //printf("AEI Timer started\n");
	  }
	  if(AEI_stop){
		  alt_alarm_stop(&AEI_Timer);
		  //printf("AEI Timer stopped\n");
	  }

	  if (LRI_stop){
		  alt_alarm_stop(&LRI_Timer);
		  //printf("LRI Stopped\n");
	  }
	  if(LRI_start){
		  alt_alarm_start(&LRI_Timer, LRI_VALUE, LRI_ISR,LRI_Context);
		  //printf("LRI Started\n");
	  }

	  if (URI_stop){
		  alt_alarm_stop(&URI_Timer);
		  //printf("URI Stopped\n");
	  }
	  if(URI_start){
		  alt_alarm_start(&URI_Timer, URI_VALUE, URI_ISR,URI_Context);
		  //printf("URI Started\n");
	  }


  }

  return 0;
}
