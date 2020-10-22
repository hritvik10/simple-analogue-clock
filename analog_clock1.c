#include<stdio.h>
#include<stdlib.h>
int a=0;
int b=0;
void clock();
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();
void ten();
void eleven();
void twelve();
void delay()
{       
        for(int j=0;j<73559900;j++)             
                                                {
                                                j++;
                                                j--;
                                                }
                
                system("clear");

}
void twelve(){
	
for(int i=0;i<5;i++)
        printf("\t\t\t\t\t*\n\n\n");
	}
void one(){
 a=0;

        for(int i=0;i<5;i++)
        {
                for(int j=5;j>a;j--)
                {
                printf("\t");
                }
                a++;

                printf("\t\t\t\t*\n\n\n");
        }
}
void two(){
	b=0;
         for(int i=0;i<4;i++)
        printf("\n\n");
        for(int i=0;i<5;i++)
        {
                for(int j=5;j>b;j--)
                {
                printf("\t");
                }
                b++;

                printf("\t\t\t\t*\n");
        }



}
void three(){
 printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
         for(int i=0;i<5;i++)
        printf("*\t");
        printf("\n\n");
}
void four(){
b=0;
         for(int i=0;i<4;i++)
        printf("\n\n\n");
        for(int i=0;i<5;i++)
        {
                for(int j=0;j<b;j++)
                {
                printf("\t");
                }
                b++;

                printf("\t\t\t\t\t*\n");
        }


}
void five(){
 b=0;
         for(int i=0;i<4;i++)
        printf("\n\n\n");

        for(int i=0;i<5;i++)
        {
                for(int j=0;j<b;j++)
                {
                printf("\t");
                }
                b++;

                printf("\t\t\t\t\t*\n\n\n");
        }
}
void six(){
for(int i=0;i<4;i++)
        printf("\n\n\n");
 
       for(int i=0;i<5;i++)
        printf("\t\t\t\t\t*\n\n\n");

}
void seven(){
b=5;
         for(int i=0;i<4;i++)
        printf("\n\n\n");

        for(int i=0;i<5;i++)
        {
                for(int j=b;j>0;j--)
                {
                printf("\t");
                }
                b--;

                printf("*\n\n\n");
        }
}
void eight()
	{
	 b=5;
         for(int i=0;i<4;i++)
        printf("\n\n\n");

        for(int i=0;i<5;i++)
        {
                for(int j=b;j>0;j--)
                {
                printf("\t");
                }
                b--;

                printf("*\n");
        }
	
	}
void nine(){
 printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t");
         for(int i=0;i<5;i++)
        printf("*\t");
        printf("\n\n");
}
void eleven(){
a=0;

        for(int i=0;i<5;i++)
        {
                for(int j=0;j<a;j++)
                {
                printf("\t");
                }
                a++;

                printf("\t*\n\n\n");
        }

}
void ten(){
a=0;
	for(int i=0;i<8;i++)
	printf("\n");
        for(int i=0;i<5;i++)
        {
                for(int j=0;j<a;j++)
                {
                printf("\t");
                }
                a++;

                printf("\t*\n");
        }

}

void clock()
{
delay();
twelve();
delay();
one();
delay();
 two();
delay();
 three();
delay();
four();
delay();
five();
delay();
six();
delay();
seven();
delay();
eight();
delay();
nine();
delay();
ten();
delay();
eleven();
}

int main()
{
while(1)
clock();
}
