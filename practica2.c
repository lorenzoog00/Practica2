#include <stdio.h>
#include<stdlib.h>
void Intro();
void Menu(int *Op);
void Acendente(float Lista[],int l);
void Decendente(float Lista [],int l);
void caso_1(float *Lista, int l);
void caso_2a(float Lista[], int i, int l, int j);
void caso_3a(float Lista[]);

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
              break;
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
                      Decendente(Lista,l);
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
      
    }while(Op!=3);
  
}

void Intro()
{
  printf("Lorenzo Orozco \n");
  getchar();
  printf("El objetivo del programa es demostrar el dominio que tengo sobre los arreglos. \n El programa ordenará de manera acendente o decendente (como lo elijas) un listado de números entre 5 y 100. \n");
  getchar();
}
void Menu(int *Op)
{
  printf("\nEste es el menú; si se quiere un listado de manera acendente preciona 1, si se quiere un listado en forma   decendente favor de precionar 2, si se quiere terminar el prog\
rama favor de precionar 3. \n" );
  scanf("%d",Op);

}

void Acendente(float Lista[],int l)
{
    
  int  i, j,r, print, h; //i y j son contadores. r es para imprimir la lista de manera apropiada, h es para no modificar la j
  int flag=0;
  float guarda;
  for(i=0; i<l; i++)
    {
      r=i+1;
      j=i-1;
      printf("Lista[%d]: \n", r);
      if(scanf("%f", &Lista[i])!=1)
	{
	  printf("\nPor favor ingresa un numero real\n");
	}	 
      else
	{
	  guarda=Lista[i];
	  if(i==0)
	    {
	      caso_1(Lista, l);
	    }
	  else
	    {
	      if(Lista[j]<=guarda)
		{
		  for(print=0; print<=i; print++)
		    {
		      printf("%f ", Lista[print]);
		      if(print==i)
			{
			  printf("\n");
			}
		    }
		}
	      if(guarda<Lista[j])
		{
		  while(guarda<Lista[j])
		    {
		      j--;
		    }
		  for(h=i; h>j; h--)
		    {
		      Lista[h+1]=Lista[h];
		    }
		  Lista[j+1]=guarda;
		  for(print=0; print<=i; print++)
		    {
		      printf("%f ", Lista[print]);
		      if(print==i)
			{
			  printf("\n");
			}
		    }
		}
	    }
	
	}
    }
}
void caso_1(float Lista[], int l)
{                                                                                                                                             
  printf("%f \n", Lista[0]);
}

void caso_2a(float Lista[], int i,int l,int j)
{
  int print;
  float guarda; // variable donde se almacena temporalmente para el cambio, print variable para imprimir el arreglo                                                           
  Lista[i]=guarda;
  Lista[j]=Lista[i];
  guarda=Lista[i];
  for(print=0; print<i;  print++)
    {
      printf("%f ,", Lista[print]);
    }

  for(print=i; print>l; print++)
    {
      if(print==l-1)
        {
          printf("x \n");
        }
      printf("x, ");
    }
}

void caso_3a(float Lista[])
{
    printf("caso 3");
}

void Decendente(float Lista[], int l)
{
  int  i, j,r, print, h; //i y j son contadores. r es para imprimir la lista de manera apropiada, h es para no modificar la j                                                       
    float guarda;
    for(i=0; i<l; i++)
      {
	r=i+1;
	j=i-1;
	printf("Lista[%d]: \n", r);
	if(scanf("%f", &Lista[i])!=1)
	  {
	    printf("\nPor favor ingresa un numero real\n");
	  }
	else
	  {
	    guarda=Lista[i];
	    if(i==0)
	      {
		caso_1(Lista, l);
	      }
	    else
	      {
		if(Lista[j]>=guarda)
		  {
		    for(print=0; print<=i; print++)
		      {
			printf("%f ", Lista[print]);
			if(print==i)
			  {
			    printf("\n");
			  }
		      }
		  }
		if(guarda>Lista[j])
		  {
		    while(guarda>Lista[j])
		      {
			j--;
		      }
		    if(j<=0)
		      {
			j=0;
		      }
		    while(guarda>Lista[j])
			{
			  j--;
			}
		      for(h=i; h>j; h--)
			{
			  Lista[h+1]=Lista[h];
			}
		      Lista[j+1]=guarda;
		      for(print=0; print<=i; print++)
			{
			  printf("%f ", Lista[print]);
			  if(print==i)
			    {
			      printf("\n");
			    }
			}
		  }
	      }
	  }
      }		 
}		  
		
	      
	  
      
    
