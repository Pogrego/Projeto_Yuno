//****************************************
//*	Projeto Yuno  - Paulo Grego      *
//*	Verção 1.0    - Giovanna         *
//*	Ultima atualização - 09/06/16	 *
//****************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include < math.h>

void mes(){
  return 0;
}
void sim(){
  int x = rand();
  if()			printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
}
void nao(){
  int x = rand();
  if()			printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
  else if()		printf("");
}
void bem(){
}
void inicio(){
  int x = rand();
  if(){			bem();
  }else if(){		mes();
  }else if(){

}
void matematica(){
  int x;
  float valor,base,expoente;
  printf("\nQuero muito te ajudar! No que posso ser util?\n");
  printf("1 - Calcular o Seno     ");
  printf("2 - Calcular o Cosseno\n");
  printf("3 - Calcular Potencia   ");
  printf("4 - Calcular Raiz Quadrada\n");
  printf("5 - Calcular Log Base2  ");
  printf("6 - Calcular Log Base10\n");
  printf("7 - Calcular Tangente   ");
  printf("8 - Chega de Matematica!\n"); 
   
    while(  scanf("%d",&x) != 8){
    switch (x){
      case 1:		  scanf("%f",&valor);printf(".2%f\n",&sen(valor));	break;
      case 2:		  scanf("%f",&valor);printf(".2%f\n",&cos(valor));	break;
      case 3:		  scanf("%f",&base);	scanf("%f",&expoente);	printf(".2%f\n",&pow(base,expoente));	break;
      case 4:		  scanf("%f",&valor);printf(".2%f\n",&sqrt(valor));	break;
      case 5:	          scanf("%f",&valor);printf(".2%f\n",&log2(valor));	break;
      case 6:		  scanf("%f",&valor);printf(".2%f\n",&log10(valor));	break;
      case 7:		  scanf("%f",&valor);printf(".2%f\n",&tan(valor));	break;
      case 8:		  return;	
    }
  }
}

void diario(){
}
void cobrinha(){

}
void menu(){
  int x;
  
  printf("\nQuero muito te ajudar! No que posso ser util?\n");
  printf("1 - Me Ajude com Matematica     ");
  printf("2 - Preciso Desabafar\n");
  printf("3 - Vamos jogar video game?     ");
  printf("4 - Não Preciso de mais nada\n");
  
  while(  scanf("%d",&x) != 4){
    switch (x){
      case 1:		  matematica();break;
      case 2:		  diario();break;
      case 3:		  cobrinha();break;
      case 4:		  return;
    }
  }
  
}
int main(){
  int i, j;
  char desabafo[500];
  printf("-------Yuno-------\n");

  inicio();
  printf("\n");
  menu();

  return 0;
}
