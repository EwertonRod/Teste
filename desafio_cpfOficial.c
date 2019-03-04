#include<stdio.h>

int valdacao_cpf(){
	int cpf[11]={0,0,0,0,0,0,0,0,0,0,0};
	int i,cont,cont1, primeiro_cal,segunda_cal,terceiro_cal,quarta_cal;
	// Primeira etapa recebendo DADOS
	printf("Digite seu cpf com 11 digitos\n\n");
	for(i=0;i<11;i++){
		printf("Insira o %d: ",i);
		scanf("%d",&cpf[i]);	
		printf("\n");
	}
	//SEGUNDO ETAPA CONFERINDO SE O CPF E VALIDO COMPARANDO SE TODOS OS CAMPOS SÃO IGUAIS
	if(cpf[1]==cpf[2] && cpf[2]==cpf[3] && cpf[4]==cpf[5] && cpf[5]==cpf[6] && cpf[6]==cpf[7] &&cpf[7]==cpf[8] && cpf[8]==cpf[9] && cpf[9]==cpf[10] ){
	printf("cpf invalido");
	}else {
		cont = 10;
		for(i=0;i<=8;i++){
			 primeiro_cal = (cpf[i]*cont) + primeiro_cal;
			 cont-=1;
			 printf("\n");
		}
			segunda_cal = (primeiro_cal*10)%11;
			if(segunda_cal==10){
				segunda_cal = 0;
			}
	
				cont1 = 11;
				for(i=0;i<10;i++){
					terceiro_cal=(cpf[i]*cont1)+terceiro_cal;
					cont1-=1;
					printf("%d\n",terceiro_cal);
				}
	
				quarta_cal =(terceiro_cal*10)%11;
				if(quarta_cal==cpf[10] && segunda_cal==cpf[9] ){
	 				printf("CPF %d %d %d . %d %d %d. %d %d %d - %d %d - Valido",cpf[0],cpf[1],cpf[2],cpf[3],cpf[4],cpf[5],cpf[6],cpf[7],cpf[8],cpf[9],cpf[10]);
				}else{
					printf("CPF %d %d %d . %d %d %d - %d %d - Invalido",cpf[0],cpf[1],cpf[2],cpf[3],cpf[4],cpf[5],cpf[6],cpf[7],cpf[8],cpf[9],cpf[10]);
		
				}
	
	
			}

	}

int main()
{
  valdacao_cpf();
	
		
return 0;	
}
