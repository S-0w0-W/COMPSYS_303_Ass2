/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
char URI_ex;
char APace;
char LRI_stop;
char VRP_start;
char PVARP_start;
char AVI_stop;
char AEI_stop;
char URI_stop;
char VSense;
char ASense;
char LRI_ex;
char VRP_ex;
char PVARP_ex;
char AVI_ex;
char AEI_ex;
char VPace;
char LRI_start;
char AVI_start;
char AEI_start;
char URI_start;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char g6;
char PRE_g6;
char g7;
char g8;
char PRE_g8;
char g9;
char g10;
char g11;
char g12;
char PRE_g12;
char g13;
char g14;
char g15;
char g16;
char g17;
char g18;
char g19;
char PRE_g19;
char g20;
char g21;
char g22;
char PRE_g22;
char g23;
char g24;
char g25;
char g26;
char g27;
char PRE_g27;
char g28;
char g29;
char g30;
char PRE_g30;
char g31;
char g32;
char g33;
char g34;
char g35;
char PRE_g35;
char g36;
char g37;
char g38;
char g39;
char PRE_g39;
char g40;
char g41;
char g42;
char g43;
char g44;
char PRE_g44;
char g45;
char g46;
char g47;
char g48;
char g49;
char g50;
char PRE_g50;
char g51;
char g52;
char g53;
char PRE_g53;
char g54;
char g55;
char g56;
char PRE_g56;
char g57;
char g58;
char g59;
char g60;
char g61;
char g62;
char g63;
char PRE_g63;
char g64;
char g65;
char g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g71;
char g72;
char PRE_g72;
char g73;
char g74;
char PRE_g74;
char g75;
char g76;
char g77;
char g78;
char g79;
char g80;
char PRE_g80;
char g81;
char g82;
char g83;
char g84;
char g85;
char PRE_g85;
char g86;
char g87;
char g88;
char PRE_g88;
char g89;
char g90;
char PRE_g90;
char g91;
char g92;
char g93;
char g94;
char g95;
char g96;
char g97;
char g98;
char g99;
char g100;
char g101;
char PRE_g101;
char g102;
char g103;
char g104;
char _GO;
char _cg16;
char _cg4;
char _cg10;
char _cg11;
char _cg14;
char _cg7;
char _cg9;
char _cg23;
char _cg24;
char _cg20;
char _cg31;
char _cg32;
char _cg28;
char _cg46;
char _cg36;
char _cg38;
char _cg42;
char _cg40;
char _cg51;
char _cg54;
char _cg57;
char _cg64;
char _cg62;
char _cg55;
char _cg60;
char _cg58;
char _cg65;
char _cg82;
char _cg70;
char _cg73;
char _cg78;
char _cg75;
char _cg79;
char _cg81;
char _cg97;
char _cg86;
char _cg89;
char _cg95;
char _cg91;
char _cg94;
char g17_e1;
char g25_e2;
char g33_e3;
char g48_e4;
char g67_e5;
char g83_e6;
char g98_e7;
char g99_e1_fix;
char g99_e1;
char g103_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g6 = 0;
   PRE_g8 = 0;
   PRE_g12 = 0;
   PRE_g19 = 0;
   PRE_g22 = 0;
   PRE_g27 = 0;
   PRE_g30 = 0;
   PRE_g35 = 0;
   PRE_g39 = 0;
   PRE_g44 = 0;
   PRE_g50 = 0;
   PRE_g53 = 0;
   PRE_g56 = 0;
   PRE_g63 = 0;
   PRE_g69 = 0;
   PRE_g72 = 0;
   PRE_g74 = 0;
   PRE_g80 = 0;
   PRE_g85 = 0;
   PRE_g88 = 0;
   PRE_g90 = 0;
   PRE_g101 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g2 = g1;
      g100 = g0;
      g102 =(PRE_g101);
      g101 =(g100||g102);
      if(g101){
         VPace = 0;
         APace = 0;
         LRI_start = 0;
         LRI_stop = 0;
         VRP_start = 0;
         PVARP_start = 0;
         AVI_start = 0;
         AVI_stop = 0;
         AEI_start = 0;
         AEI_stop = 0;
         URI_start = 0;
         URI_stop = 0;
      }
      g40 =(PRE_g39);
      _cg40 = ASense;
      g42 =(g40&&(!(_cg40)));
      _cg42 = AEI_ex;
      g43 =(g42&&_cg42);
      if(g43){
         APace =(APace||1);
      }
      g4 =(PRE_g3);
      _cg4 = ASense;
      g16 =(g4&&(!(_cg4)));
      _cg16 = APace;
      g3 =((g16&&(!(_cg16)))||g2);
      g13 =(PRE_g12);
      g9 =(PRE_g8);
      _cg9 = PVARP_ex;
      g10 =(g13||(g9&&_cg9));
      _cg10 = ASense;
      g11 =(g10&&(!(_cg10)));
      _cg11 = APace;
      g5 =((g11&&_cg11)||(g10&&_cg10)||(g16&&_cg16)||(g4&&_cg4));
      if(g5){
         AVI_start =(AVI_start||1);
      }
      g7 =(PRE_g6);
      _cg7 = AVI_ex;
      g14 =(g7&&(!(_cg7)));
      _cg14 = VSense;
      g6 =((g14&&(!(_cg14)))||g5);
      g15 =(g14&&_cg14);
      if(g15){
         AVI_stop =(AVI_stop||1);
      }
      g8 =(g15||(g9&&(!(_cg9)))||(g7&&_cg7));
      g12 =(g11&&(!(_cg11)));
      g18 = g1;
      g57 =(PRE_g56);
      _cg57 = VSense;
      g58 =(g57&&(!(_cg57)));
      _cg58 = LRI_ex;
      g59 =(g58&&_cg58);
      if(g59){
         VPace =(VPace||1);
      }
      g60 =(g58&&(!(_cg58)));
      _cg60 = AVI_ex;
      g61 =(g60&&_cg60);
      if(g61){
         VPace =(VPace||1);
      }
      g64 =(PRE_g63);
      _cg64 = VSense;
      g65 =(g64&&(!(_cg64)));
      _cg65 = URI_ex;
      g66 =(g65&&_cg65);
      if(g66){
         VPace =(VPace||1);
      }
      g51 =(PRE_g50);
      _cg51 = AVI_ex;
      g52 =(g51&&_cg51);
      if(g52){
         VPace =(VPace||1);
      }
      g20 =(PRE_g19);
      _cg20 = VSense;
      g24 =(g20&&(!(_cg20)));
      _cg24 = VPace;
      g23 =(PRE_g22);
      _cg23 = VRP_ex;
      g19 =(g18||(g24&&(!(_cg24)))||(g23&&_cg23));
      g21 =((g20&&_cg20)||(g24&&_cg24));
      if(g21){
         VRP_start =(VRP_start||1);
      }
      g22 =(g21||(g23&&(!(_cg23))));
      g26 = g1;
      g31 =(PRE_g30);
      _cg31 = PVARP_ex;
      g28 =(PRE_g27);
      _cg28 = VSense;
      g32 =(g28&&(!(_cg28)));
      _cg32 = VPace;
      g27 =(g26||(g31&&_cg31)||(g32&&(!(_cg32))));
      g29 =((g32&&_cg32)||(g28&&_cg28));
      if(g29){
         PVARP_start =(PVARP_start||1);
      }
      g30 =(g29||(g31&&(!(_cg31))));
      g34 = g1;
      g36 =(PRE_g35);
      _cg36 = VSense;
      g46 =(g36&&(!(_cg36)));
      _cg46 = VPace;
      g41 =(g40&&_cg40);
      if(g41){
         AEI_stop =(AEI_stop||1);
      }
      g35 =((g46&&(!(_cg46)))||g41||g34||g43);
      g37 =(g36&&_cg36);
      if(g37){
         AEI_start =(AEI_start||1);
      }
      g47 =(g46&&_cg46);
      if(g47){
         AEI_start =(AEI_start||1);
      }
      g45 =(PRE_g44);
      g38 =(g37||g47||g45);
      _cg38 = PVARP_ex;
      g39 =((g38&&_cg38)||(g42&&(!(_cg42))));
      g44 =(g38&&(!(_cg38)));
      g49 = g1;
      g50 =((g51&&(!(_cg51)))||g49);
      g54 =(PRE_g53);
      _cg54 = VSense;
      g55 =(g54&&(!(_cg54)));
      _cg55 = URI_ex;
      g62 =(g55&&(!(_cg55)));
      _cg62 = AVI_ex;
      g53 =((g64&&_cg64)||(g57&&_cg57)||(g62&&(!(_cg62)))||(g54&&_cg54)||g52||g59||g66||g61);
      g56 =((g55&&_cg55)||(g60&&(!(_cg60))));
      g63 =((g62&&_cg62)||(g65&&(!(_cg65))));
      g68 = g1;
      g70 =(PRE_g69);
      _cg70 = VSense;
      g82 =(g70&&(!(_cg70)));
      _cg82 = VPace;
      g69 =(g68||(g82&&(!(_cg82))));
      g71 =((g82&&_cg82)||(g70&&_cg70));
      if(g71){
         URI_start =(URI_start||1);
      }
      g73 =(PRE_g72);
      _cg73 = VRP_ex;
      g81 =(PRE_g80);
      _cg81 = VSense;
      g75 =(PRE_g74);
      _cg75 = VSense;
      g78 =(g75&&(!(_cg75)));
      _cg78 = URI_ex;
      g79 =((g81&&(!(_cg81)))||(g78&&_cg78));
      _cg79 = VPace;
      g76 =(g75&&_cg75);
      if(g76){
         URI_stop =(URI_stop||1);
      }
      g77 =((g79&&_cg79)||(g81&&_cg81)||g76);
      if(g77){
         URI_start =(URI_start||1);
      }
      g72 =((g73&&(!(_cg73)))||g77||g71);
      g74 =((g73&&_cg73)||(g78&&(!(_cg78))));
      g80 =(g79&&(!(_cg79)));
      g84 = g1;
      g86 =(PRE_g85);
      _cg86 = VSense;
      g97 =(g86&&(!(_cg86)));
      _cg97 = VPace;
      g85 =(g84||(g97&&(!(_cg97))));
      g87 =((g86&&_cg86)||(g97&&_cg97));
      if(g87){
         LRI_start =(LRI_start||1);
      }
      g89 =(PRE_g88);
      _cg89 = VRP_ex;
      g91 =(PRE_g90);
      _cg91 = VSense;
      g92 =(g91&&_cg91);
      if(g92){
         LRI_stop =(LRI_stop||1);
      }
      g94 =(g91&&(!(_cg91)));
      _cg94 = LRI_ex;
      g95 =(g94&&(!(_cg94)));
      _cg95 = VPace;
      g96 =(g95&&_cg95);
      if(g96){
         LRI_stop =(LRI_stop||1);
      }
      g93 =(g92||(g94&&_cg94)||g96);
      if(g93){
         LRI_start =(LRI_start||1);
      }
      g88 =((g89&&(!(_cg89)))||g87||g93);
      g90 =((g95&&(!(_cg95)))||(g89&&_cg89));
      g17_e1 =(!((g4||g7||g9||g13)));
      g25_e2 =(!((g20||g23)));
      g33_e3 =(!((g28||g31)));
      g48_e4 =(!((g36||g40||g45)));
      g67_e5 =(!((g51||g54||g57||g64)));
      g83_e6 =(!((g70||g73||g75||g81)));
      g98_e7 =(!((g86||g89||g91)));
      g99_e1_fix =(g23||g31||g54||g73||g89||g40||g45||g9||g75||g91||g57||g64||g13);
      g99_e1 =(!((g4||g20||g28||g36||g51||g70||g86||g7||g81||g99_e1_fix)));
      g103_e2 =(!(g102));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g8 = g8;
   PRE_g12 = g12;
   PRE_g19 = g19;
   PRE_g22 = g22;
   PRE_g27 = g27;
   PRE_g30 = g30;
   PRE_g35 = g35;
   PRE_g39 = g39;
   PRE_g44 = g44;
   PRE_g50 = g50;
   PRE_g53 = g53;
   PRE_g56 = g56;
   PRE_g63 = g63;
   PRE_g69 = g69;
   PRE_g72 = g72;
   PRE_g74 = g74;
   PRE_g80 = g80;
   PRE_g85 = g85;
   PRE_g88 = g88;
   PRE_g90 = g90;
   PRE_g101 = g101;
   _PRE_GO = _GO;
   return;
}



