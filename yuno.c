//****************************************
//*	Projeto Yuno  - Paulo Grego      *
//*	Verção 1.0    - Giovanna         *
//*	Ultima atualização - 09/06/16	 *
//****************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include < math.h>

void mes(char * aux){
  
  if(strcmp(aux,"Janeiro") == 0||strcmp(aux,"janeiro") == 0 || strcmp(aux,"JANEIRO") == 0 )			
      printf("Janeiro? Vai ser o que então? Praia ou Minas?\n O que quer que escolha, tenho certeza de que vai se divertir muito!^-^\n");
  else if(strcmp(aux,"Fevereiro") == 0||strcmp(aux,"fevereiro") == 0 || strcmp(aux,"FEVEREIRO") == 0 )	
      printf("Tem Carnaval! *TEM CARNAVAL!* \n Tai um bom mes pra se entregar pra folia e deixar os problemas de lado!! 0/ \n");
  else if(strcmp(aux,"Março") == 0||strcmp(aux,"março") == 0 || strcmp(aux,"MARÇO") == 0 )		
      printf("Sabe o que Março significa pra mim? Recomeço.\n Vai la no quarto da sua irma e da um abraço bem profundo nela.\nVoce sabe que ela te ama\n");
  else if(strcmp(aux,"Abril") == 0||strcmp(aux,"abril") == 0 || strcmp(aux,"ABRIL") == 0 )		
      printf("Eu ouvi pascoa?\nVou dividir um segredinho com voce entao!\nHackiei o celular do Paulo e descobri que ele comprou chocolates pra voce!\n");
  else if(strcmp(aux,"Maio") == 0||strcmp(aux,"maio") == 0 || strcmp(aux,"MAIO") == 0 )		
      printf("Mes que vem eh aniversario da Giulli, nao eh?\nNao vai esquecer.\n");
  else if(strcmp(aux,"Junho") == 0||strcmp(aux,"junho") == 0 || strcmp(aux,"JUNHO") == 0 )		
      printf("So mais um pouquinho para terminar o semestre! Sei que ta dificil, mas nao desiste nao! T-T \n "");
  else if(strcmp(aux,"Julho") == 0||strcmp(aux,"julho") == 0 || strcmp(aux,"JULHO") == 0 )		
      printf("Usa esse periodo de descanso bem.\nSei que a vontade de recuperar a materia eh grande, mas voce precisa focar em voltar viva.\nSe nao nao da certo.\n");
  else if(strcmp(aux,"Agosto") == 0||strcmp(aux,"agosto") == 0 || strcmp(aux,"AGOSTO") == 0 )		
      printf("O melhor mes do ano, hein? ^-^ \nAproveite esse mes do seu aniversário(parabens) para refletir o quanto cresceu nesse ano.\n");
  else if(strcmp(aux,"Setembro") == 0||strcmp(aux,"setembro") == 0 || strcmp(aux,"SETEMBRO") == 0 )		
      printf("Sabe o problema de estar tao no meio do mes?\nA gente se esquece do porque começou o que queria...\nNunca se esquece do que te fez estar ai.\nSiga sempre em frente!\n");
  else if(strcmp(aux,"Outubro") == 0||strcmp(aux,"outubro") == 0 || strcmp(aux,"OUTUBRO") == 0 )		
      printf("Outubro?\n Bem...Isso quer dizer que o grande dia está chegando? Eh melhor se preparar, hein?");
  else if(strcmp(aux,"Novembro") == 0||strcmp(aux,"novembro") == 0 || strcmp(aux,"NOVEMBRO") == 0 )		
      printf("Eh isso ai! O grande mes chegou....\n Voce esta pronta...PRO ANIVERSARIO DO PAULO!?\n Te enganei, não foi? Não pude evitar...sou uma robô zueira. _(ツ)_/¯ \n Falando serio agora...Boa sorte na primeira fase. Voce treinou o ano todo pra isso. Agora eh o seu momento.\n");
  else if(strcmp(aux,"Dezembro") == 0||strcmp(aux,"dezembro") == 0 || strcmp(aux,"DEZEMBRO") == 0 )		
      printf("Mes vai, mes vem, e ja chegamos no fim do ano!Consegue acreditar?!\nBem...eu nao. Muito obrigada por me usar. Fico muito feliz de ter voce para conversar.\n Celebre o Natal por mim tambem! 0/\n");
  else 
      printf("\nDesculpe..Não Entendi...Poderia repetir?\n");
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
  char aux[15];
  if(){			bem();
  }else if(){		
    printf("Olá!\nAndo meio esquecida ultimamente...Em que mes estamos?\n");
    scanf("%s",aux);
    mes(aux);
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
