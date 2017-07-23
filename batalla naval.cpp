#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void MatrizInicial(char[][10],char[][10]);
void AddBarco (char MatrizPc[][10],char MatrizJ[][10]);

void ListaBarcos () { // Barcos segun reglas Hasbro.
    int f=10,c=10;
    char PortaAviones2[f][c]; // 5 espacios.
	char PortaAviones[f][c]; // 5 espacios.
	char Acorazado1[f][c]; // 4 espacios.
	char Acorazado2[f][c]; // 4 espacios.
	char Destructor1[f][c]; // 3 espacios.
	char Destructor2[f][c]; // 3 espacios.
	char Submarino1[f][c]; // 3 espacios.
	char Submarino2[f][c]; // 3 espacios.
	char Fragata1[f][c]; // 2 espacios.
	char Fragata2[f][c]; // 2 espacios.
}
    
    
void AddBarco (char MatrizPc[][10],char MatrizJ[][10]){ // Funcion para Porta-Aviones.
    int s=10,a=10,X=0,Y=0,i=0,j=0,coordenadas=0,coordenadas1[s][a];
	int t=0,NumNave=0, Pop=0,Bandera=0,MiMatriz[s][a];
	
	char LetraNave[2];
    
     	
	printf("\nUbica a tu PortaAviones. \n Esta nave tiene 5 espacios.\n");
	printf("  Ingresa las coordenadas de esta Nave.\n\n");
	
	for (t=0;t<5;t++){
    int repetir=0;
    	
    	do{
            repetir=0;
            do{
              	printf("Ingresa un numero para la fila \nen la que estara el Porta-Aviones:");
          	    if (scanf(" %d",&NumNave)==1){
          		    Bandera=Bandera+1;
        	    }
        	    else {
        	  	    fflush(stdin);
        	  	    printf("Error, solo debes ingresar numeros.");
        	    }
            }while (Bandera==0);
            printf("\n");     
        	         
            Bandera=0;
        	do{
          	     printf("Ingresa un numero para la columna \nen la que estara el Porta-Aviones:");
          	     if (scanf(" %d",&Y)==1){
          		    Bandera=Bandera+1;
        	       }
        	else {
        	  	fflush(stdin);
        	  	printf("Error, solo numeros.");
        	}
            }while (Bandera==0);
            
            if(t==0){
                MatrizJ[NumNave-1][Y-1]='X';     
                coordenadas1[Y][NumNave]='X';
            }
            
            else if(t>0 && (MatrizJ[NumNave-2][Y-1]=='X' || MatrizJ[NumNave][Y-1]=='X' || MatrizJ[NumNave-1][Y-2]=='X' || MatrizJ[NumNave-1][Y]=='X'))
            {
                MatrizJ[NumNave-1][Y-1]='X';
                coordenadas1[Y-1][NumNave-1]='X';
            }else{
                printf("las posiciones deben ser seguidas, por favor repita la coordenada");
                repetir=1;
            }
            
                    
        }while(repetir==1);
        printf("\n");       
        
        coordenadas=coordenadas+1;
        srand(time(NULL));  
    	system("cls");
    }
}	
	

int main(int argc, char *argv[]){ // Inicio del Juego.
    char MatrizPc[10][10],MatrizJ[10][10];
	int CasillasBarcos[5];
	
	CasillasBarcos[0]=2;
    CasillasBarcos[1]=3;
    CasillasBarcos[2]=3;
    CasillasBarcos[3]=4;
    CasillasBarcos[4]=5;
	
	
    for(int x=0;x<10;x++){
        for(int y=0;y<10;y++){
            MatrizPc[x][y]=' ';
            MatrizJ[x][y]=' ';
        }
    }
	int X=0, Y=0;
	int s=10, a=10;
	MatrizInicial(MatrizPc,MatrizJ);
	printf("          \tEs momento de posicionar tus barcos!\n");
	printf("          \tPiensa sabiamente!");
	printf("\n");
	printf("          \t    ");
	
	AddBarco (MatrizPc,MatrizJ); // Llamada de la funcion Porta-Aviones
	printf("Porta-Aviones listo!!!");
    system("PAUSE");
	system("cls")	;
	
    MatrizInicial(MatrizPc,MatrizJ);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void MatrizInicial(char MatrizPc[][10],char MatrizJ[][10]){ // Funcion para los Tableros.   
    
    
    printf(" \n");
    printf("          \t    Bienvenido a Batalla Naval \n\n");
    
    //MatrizPc
    
    printf("\t|A||B||C||D||F||G||H||I||J||K|\n");
    printf("\t=============================== \n");
	printf("");
    
    for(int x=0;x<10;x++){
    	printf("   %d",x+1);
    	printf("\t");
    	for(int y=0;y<10;y++){
    	   printf("|%c|", MatrizPc[x][y]);
    	
		}
		printf("\n");
	}
    printf("\t===============================\n");
    
    printf(" \n"); // Separador de Tableros
    printf("\t******************************* \n"); // Separador de Tableros
	printf(" \n"); // Separador de Tableros
    
    //MatrizJugador
    
    printf("\t|A||B||C||D||F||G||H||I||J||K|\n");
    printf("\t=============================== \n");
	printf("");
    
    for(int x=0;x<10;x++){
    	printf("   %d",x+1);
    	printf("\t");
    	for(int y=0;y<10;y++){
    	   printf("|%c|", MatrizJ[x][y]);
    	
		}
	    printf("\n");
	}
    printf("\t===============================\n");
    printf(" \n");
    
}
