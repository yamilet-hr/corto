# include <stdio.h>
int matriz [5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,12,15,16,17,18,19,20,21,22,23,24,25};
int opcion, i,j,asiento,acomprar, ocupado,contador, contador2;
double ganancia;

int main(){
//menu
do{

printf("\nVenta de boletos\n 1.Comprar entrada\n 2.Mostrar ganancias\n Elija una opcion");
scanf("%d",&opcion);
switch(opcion){
	
	case 1:
	asiento=1;
	ocupado=0;
	//bucle para mostrar asientos
	for(i=0;i<5;i++){
		
		for(j=0;j<5; j++){
			
			printf("-%d",matriz[i][j]);
		
			}
		printf("\n");
		
		}
		printf("¿Que numero de asiento desea comprar?");
	scanf("%d",&acomprar);
	
	for(i=0;i<5;i++){
		
		for(j=0;j<5; j++){
			
		if(acomprar==matriz[i][j]){
			printf("asiento vendido");
			matriz[i][j]=0;
			
			}
			else if(matriz[i][j]==0){
				ocupado=1;
					
				}
			
			}
			
		
		
		}
		if(ocupado==1){
		printf("Asiento ocupado. No puede ser vendido");
	}
	break;
	
	
	case 2:
	ganancia=0;
	for(i=0;i<5;i++){
		
		for(j=0;j<5; j++){
			
		if(matriz[i][j]>=0 || i<5){
			contador=contador+1;
			ganancia=ganancia+contador*5;
		
			} else if(matriz[i][j]==0 && i>=19 && i<=24){
		
			contador2=contador2+1;
			ganancia=ganancia*3.5;
		}
	}
	
	
}
	printf("Ganancias %f",ganancia);
	
	break;
	
	}




}while(opcion>=1 && opcion<=2);









}
