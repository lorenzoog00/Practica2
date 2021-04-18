#include <stdio.h>
#include<stdlib.h>
void Intro();
void Menu(int *Op);
void Acendente(float Lista[100],int l);
void Decendente(float Lista [100],int l);

int main (void)
{
  int Op, l; //para ver que opcion desea el usuario
  //l numero entre 5 y 100
  float Lista [100];

  Intro();
  
  do
    {
      Menu(&Op);
      if(Op==1 || Op==2 || Op==3)
	{
	  if(Op==3)
	    {
	    }
	  else
	    {
	      printf("De que tamaño quieres la lista? (entre el 5 y el 100). \n");
	      scanf("%d", &l);
	      if(l>=5 && l<=100)
		{
		  if(Op==1)
		    {
		      Acendente(Lista, l);
		    }
		  if (Op==2)
		    {
		      Decendente(Lista, l);
		    }
		}
	      else
		{
		  printf("Por favor ingresar valores entre el 5 y 100 \n.");
		  getchar();
		}
	    }
	}
      else
	{
	  printf("Carácter inválido en menú. Presione enter para regresar \n");
	  getchar();
	}
    }
      while(Op!=3);
    
}

void Intro()
{
  printf("Lorenzo Orozco \n");
  getchar();
  printf("El objetivo del programa es demostrar el dominio que tengo sobre los arreglos. /n El programa ordenará de manera acendente o decendente (como lo elijas) un listado de números entre 5 y 100. \n");
  getchar();
}
void Menu(int *Op)
{
  printf("Este es el menú; si se quiere un listado de manera acendente preciona 1, si se quiere un listado en forma   decendente      favor de precionar 2, si se quiere terminar el programa favor de precionar 3. \n" );
  scanf("%d",Op);

}

void Acendente(float Lista[],int l)
{
  printf("1");
}

void Decendente(float Lista[], int l)
{
  printf("2");
}
