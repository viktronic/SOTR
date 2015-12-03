#include "types.h"
#include "user.h"
//#include "mmu.h"
//#include "param.h"
//#include "proc.h"

int main(void){
int i;
//  printf(1, "HOLA ncpus=%d\n", getprocs());
//  printf(1, "Currently running processes: %d\n", getprocs());
  for(i=0;i<64;i++){
  	if(getprocs()<64){
		if(fork()==0)
	  	   while(1);
  	}
  }
while(1);
exit();
}
