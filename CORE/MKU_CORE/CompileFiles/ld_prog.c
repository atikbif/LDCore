#include "ld_prog.h"
#include "elements.h"
#include "iodef.h"

#include "os_conf.h"

#include "lib_elements.h"

unsigned short plc_cycle = 10;

short ain[AI_CNT];
unsigned char din[DI_CNT];
unsigned char dinr[DI_CNT];
unsigned char dinf[DI_CNT];
unsigned char dout[DO_CNT];
extern unsigned char din_break[4];;
extern unsigned char din_short_circuit[4];;
extern unsigned char din_fault[4];;
unsigned char ibit[IBIT_CNT];
unsigned short tmrms[TMRMS_CNT];
unsigned short tmrs[TMRS_CNT];
short ireg[IREG_CNT];
short frsh[FRSH_CNT];
double frd[FRD_CNT];
long frl[FRL_CNT];


extern unsigned short work_time;



short p1_v1=1;
unsigned char p1_v10=0;
unsigned char p1_v11=0;

void inc_timers(){
}

void ld_process(void) {
	p1_v11=variable_bool(DI1,p1_v1);
	p1_v10=relay_bool(&DO1,p1_v11);
}
