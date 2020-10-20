/*
 * sccharts.h
 *
 *  Created on: Oct 20, 2020
 *      Author: ShiYao Wang
 */

#ifndef SCCHARTS_H_
#define SCCHARTS_H_


//functions
void tick();
void reset();

//inputs
extern char VSense;
extern char ASense;

extern char LRI_ex;
extern char URI_ex;
extern char VRP_ex;
extern char PVARP_ex;
extern char AEI_ex;
extern char AVI_ex;

//outputs
extern char VPace;
extern char APace;

extern char LRI_start;
extern char LRI_stop;

extern char URI_start;
extern char URI_stop;

extern char VRP_start;

extern char PVARP_start;

extern char AEI_start;
extern char AEI_stop;

extern char AVI_start;
extern char AVI_stop;

#endif /* SCCHARTS_H_ */
