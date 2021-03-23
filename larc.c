#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
FILE *f;
int numeros[100];
int i=0,contador=1;
f=fopen("/home/javier/Numeros/numeros10millones.txt", "r");
if(f==NULL){
	perror("ERORR EN LA LECTURA DEL ARCHIVO");
}else{
	while(contador<=10){
		fscanf(f,"%d",&numeros[i]);
		printf("%d\n",numeros[i]);
		i++;
		contador++;
	}
}
return 0;
}
