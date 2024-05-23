#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 100

void athroisma_grammon(int pin[SIZE][SIZE], int pin_sum_grammon[SIZE], int N, int M);
void athroisma_stilon(int pin[SIZE][SIZE], int pin_sum_stilon[SIZE], int N, int M);
void diafora_grammon (int pin[SIZE][SIZE], int pin_diafora_grammon[SIZE],int N, int M);
void diafora_stilon (int pin[SIZE][SIZE], int pin_diafora_stilon[SIZE],int N, int M);
void mesos_oros_grammon (int pin[SIZE][SIZE], int pin_mesos_oros_grammon[SIZE],int N, int M);
void mesos_oros_stilon (int pin[SIZE][SIZE], int pin_mesos_oros_stilon[SIZE],int N, int M);
void diamesos_grammon (int pin[SIZE][SIZE], int pin_diamesou_grammon[SIZE],int N, int M);
void diamesos_stilon (int pin[SIZE][SIZE], int pin_diamesou_stilon[SIZE],int N, int M);
void ginomeno_grammon(int pin[SIZE][SIZE], int pin_gin_grammon[SIZE],int N, int M);
void ginomeno_stilon(int pin[SIZE][SIZE], int pin_gin_stilon[SIZE],int N, int M);
void max_grammon (int pin[SIZE][SIZE], int pin_max_grammon[SIZE],int N, int M);
void max_stilon (int pin[SIZE][SIZE], int pin_max_stilon[SIZE],int N, int M);
void min_grammon(float pin[SIZE][SIZE], float pin_min_grammon[SIZE],int N, int M);
void min_stilon(float pin[SIZE][SIZE], float pin_min_stilon[SIZE],int N, int M);


int main(void)
{

 int i, j, N, M, u, choice,pin3[SIZE];
    char pin2[SIZE];
      int pin_gin_grammon[SIZE],
          pin_gin_stilon[SIZE],
          pin_max_grammon[SIZE],
          pin_max_stilon[SIZE],
          pin_min_grammon[SIZE],
          pin_min_stilon[SIZE],
		  pin_sum_grammon[SIZE],
		  pin_sum_stilon[SIZE],
		  pin_diafora_grammon[SIZE],
		  pin_diafora_stilon[SIZE],
          pin_mesos_oros_grammon[SIZE],
          pin_mesos_oros_stilon[SIZE],
          pin_diamesou_grammon[SIZE],
          pin_diamesou_stilon[SIZE],
		  pin[SIZE][SIZE];

 printf("********KALOSIRTHATE********\n");
        printf("Dose grammes kai stiles gia to ipologistiko fillo:\n");
        scanf("%d %d", &N, &M);
        printf("parakalo gemiste to ipologistiko fillo:\n");
        for (i=0; i<N; i++)
		{
            for (j=0; j<M; j++)
			{
            	scanf(" %d", &pin[i][j]);
        	}
		}

		pin2[0]='A';
        for (i=0; i<=N; i++)
		{
			pin2[i+1]=pin2[i]+1;
		}
        for(j=1; j<=M; j++)
		{
            pin3[j]=j;
		}
        printf("ti tha itheles na kanei to ipologistiko fillo:\n");
        printf("1.Prosthesi\n2.Diafora\n3.Meso Oro\n4.Diameso\n5.Ginomeno\n6.Megisto\n7.Elaxisto\n");
        scanf(" %d", &choice);

    while(!(choice>0 && choice<8))
	{
	    printf("LATHOS EISODOS DEDOMENON!\n");
        printf("Ksanadose tin epilogi sou:");
        scanf(" %d", &choice);
    }
    printf(" ");
    for(i=0; i<N; i++)
	{
        printf(" %c ",pin2[i]);
   	}
    printf("\n");
if(choice==1){
	athroisma_grammon(pin, pin_sum_grammon, N, M);
    athroisma_stilon(pin, pin_sum_stilon, N, M);
	for(i=0; i<N; i++)
	{
    	printf("%d ", i+1);
        for(j=0; j<M; j++)
		{
            printf("%d ", pin[i][j]);
        }
    	printf("    sum grammon: %d\n",pin_sum_grammon[i]);
    }
    printf(" ");
	for(u=0; u<M; u++)
	{
		printf(" %d",pin_sum_stilon[u]);
    }
}
else if(choice==2){
     diafora_grammon(pin,pin_diafora_grammon,N,M);
     diafora_stilon(pin,pin_diafora_stilon,N,M);
for(i=0; i<N; i++)
	{
    	printf("%d ", i+1);
        for(j=0; j<M; j++)
		{
            printf("%d ", pin[i][j]);
        }
    	printf("    diafora grammon: %d\n",pin_diafora_grammon[i]);
    }
    printf(" ");
	for(u=0; u<M; u++)
	{
		printf(" %d",pin_diafora_stilon[u]);
    }


}

else if(choice==3){
     mesos_oros_grammon(pin,pin_diafora_grammon,N,M);
     mesos_oros_stilon(pin,pin_diafora_stilon,N,M);
for(i=0; i<N; i++)
	{
    	printf("%d ", i+1);
        for(j=0; j<M; j++)
		{
            printf("%d ", pin[i][j]);
        }
    	printf("    mo grammon: %d\n",pin_mesos_oros_grammon[i]);
    }
    printf(" ");
	for(u=0; u<M; u++)
	{
		printf(" %d",pin_mesos_oros_stilon[u]);
    }


}

else if(choice==4){
     diamesos_grammon(pin,pin_diafora_grammon,N,M);
     diamesos_stilon(pin,pin_diafora_stilon,N,M);
for(i=0; i<N; i++)
	{
    	printf("%d ", i+1);
        for(j=0; j<M; j++)
		{
            printf("%d ", pin[i][j]);
        }
    	printf("    diamesos grammon: %d\n",pin_diamesou_grammon[i]);
    }
    printf(" ");
	for(u=0; u<M; u++)
	{
		printf(" %d",pin_diamesou_stilon[u]);
		printf("-->diamesos stilon");
    }


}

else if(choice==5){
     ginomeno_grammon(pin,pin_diafora_grammon,N,M);
     ginomeno_stilon(pin,pin_diafora_stilon,N,M);
for(i=0; i<N; i++)
	{
    	printf("%d ", i+1);
        for(j=0; j<M; j++)
		{
            printf("%d ", pin[i][j]);
        }
    	printf("    ginomeno grammon: %d\n",pin_gin_grammon[i]);
    }
    printf(" ");
	for(u=0; u<M; u++)
	{
		printf(" %d",pin_gin_stilon[u]);
		printf("-->ginomeno stilon");
    }


}

else if(choice==6){
     max_grammon(pin,pin_diafora_grammon,N,M);
     max_stilon(pin,pin_diafora_stilon,N,M);
for(i=0; i<N; i++)
	{
    	printf("%d ", i+1);
        for(j=0; j<M; j++)
		{
            printf("%d ", pin[i][j]);
        }
    	printf("    max grammon: %d\n",pin_max_grammon[i]);
    }
    printf(" ");
	for(u=0; u<M; u++)
	{
		printf(" %d",pin_max_stilon[u]);
		printf("-->max stilon");
    }


}

else if(choice==7){
     min_grammon(pin,pin_diafora_grammon,N,M);
     min_stilon(pin,pin_diafora_stilon,N,M);
for(i=0; i<N; i++)
	{
    	printf("%d ", i+1);
        for(j=0; j<M; j++)
		{
            printf("%d ", pin[i][j]);
        }
    	printf("    min grammon: %d\n",pin_min_grammon[i]);
    }
    printf(" ");
	for(u=0; u<M; u++)
	{
		printf(" %d",pin_min_stilon[u]);
		printf("-->min stilon");
    }


}

printf("\n-----------------------------\n");
printf(" TELOS IPOLOGISTIKOU FILLOOU\n");
printf("-----------------------------");
return 0;
}
void athroisma_grammon(int pin[SIZE][SIZE], int pin_sum_grammon[SIZE], int N, int M)
{
	int i,j;
	for (i=0; i<N; i++)
	{
		pin_sum_grammon[i]=0;
	}
	for(i=0; i<N; i++)
	{
		for (j=0; j<M; j++)
		{
			pin_sum_grammon[i]+= pin[i][j];
		}
	}
}
void athroisma_stilon(int pin[SIZE][SIZE], int pin_sum_stilon[SIZE], int N, int M)
{
	int i,j;
	for (j=0; j<M; j++)
	{
		pin_sum_stilon[j]=0;
	}
	for(j=0; j<M; j++)
	{
		for (i=0; i<N; i++)
		{
			pin_sum_stilon[j]+= pin[i][j];
		}
	}
}
void diafora_grammon (int pin[SIZE][SIZE], int pin_diafora_grammon[SIZE],int N, int M) {
	int i,j;
	for (i=0; i<=N; i++)
	pin_diafora_grammon[i]=0;
	for (j=0; j<=M; j++)
	pin_diafora_grammon[i]-=pin[i][j];
}
void diafora_stilon (int pin[SIZE][SIZE], int pin_diafora_stilon[SIZE],int N, int M) {
	int i,j;
	for (j=0; j<=M; j++)
	pin_diafora_stilon[j]=0;
	for (i=0; i<=N; i++)
	pin_diafora_stilon[j]-=pin[j][i];
}
void mesos_oros_grammon (int pin[SIZE][SIZE], int pin_mesos_oros_grammon[],int N, int M){
	int sum=0,i,j;
	for (i=0; i<=N; i++){
		pin_mesos_oros_grammon[i]=0;
	for (j=0; j<=M; j++){
        sum=sum+pin[i][j];
        }
  pin_mesos_oros_grammon[i]=(float)sum/N;
	}
}
void mesos_oros_stilon (int pin[SIZE][SIZE], int pin_mesos_oros_stilon[],int N, int M){
	int sum=0,i,j;
	for (i=0; i<=M; i++){
		pin_mesos_oros_stilon[j]=0;
	for (j=0; j<=N; j++){
        sum=sum+pin[j][i];
        }
  pin_mesos_oros_stilon[j]=(float)sum/M;
	}
}

void diamesos_grammon (int pin[SIZE][SIZE], int pin_diamesou_grammon[SIZE],int N, int M){
	int temp=0,i,j;
	if(N%2!=0){
        for(int i=0;i<N;i++){
            pin_diamesou_grammon[i]=pin[i][N/2];
         for(int u=0;u<N-1;u++)
    {
    for(int w=0; w<N-u-1; w++)
    {
    if(pin[i][w]<pin[i][w+1])
    {
     temp = pin[i][w];
     pin[i][w] = pin[i][w+1];
     pin[i][w+1] = temp;
    }
   }
 }

        }
	}
	else{
        for(int i=0;i<N;i++){
            pin_diamesou_grammon[i]=(pin[i][N/2]+pin[i][(N/2)-1])/2;
        }
        pin_diamesou_grammon[i]=0;
    }
}

void diamesos_stilon (int pin[SIZE][SIZE], int pin_diamesou_stilon[SIZE],int N, int M){
	int temp,i,j;
	if(N%2!=0){
        for(int j=0;j<M;j++){
            pin_diamesou_stilon[j]=pin[j][N/2];
        for(int u=0;u<N-1;u++)
    {
    for(int w=0; w<N-u-1; w++)
    {
    if(pin[j][w]<pin[j][w+1])
    {
     temp = pin[j][w];
     pin[j][w] = pin[j][w+1];
     pin[j][w+1] = temp;
    }
   }
 }
        }
	}
	else{
        for( j=0;j<M;j++){
            pin_diamesou_stilon[j]=(pin[j][N/2]+pin[j][(N/2)-1])/2;
        }
        pin_diamesou_stilon[j]=0;
	}
}

void ginomeno_grammon(int pin[SIZE][SIZE], int pin_gin_grammon[SIZE],int N, int M){
int i,j;
float a;
for(i=0;i<N;i++){
	pin_gin_grammon[i]=1;
    for(j=0;j<M;j++){
    a=pin[i][j]*pin[i+1][j+1];
    }
pin_gin_grammon[i]=a;
a=0;
}
}
void ginomeno_stilon(int pin[SIZE][SIZE], int pin_gin_stilon[SIZE],int N, int M){
int i,j;
int a;
for(j=0;j<M;j++){
	pin_gin_stilon[j]=0;
    for(i=0;j<N;i++){
    a=pin[j][i]*pin[j+1][i+1];
    }
pin_gin_stilon[j]=a;
a=0;
}
}
void max_grammon (int pin[SIZE][SIZE], int pin_max_grammon[SIZE],int N, int M){
int max=pin[0][0],i,j;
for(i=0;i<N;i++){
	pin_max_grammon[i]=0;
    for(j=0;j<M;j++){
    if(max<pin[i][j]){
    max=pin[i][j];
    }
    }
pin_max_grammon[i]=max;
max=pin[i+1][j];
}
}

void max_stilon (int pin[SIZE][SIZE], int pin_max_stilon[SIZE],int N, int M){
int max=pin[0][0],i,j;
for(j=0;j<M;j++){
	pin_max_stilon[j]=0;
    for(i=0;j<N;i++){
    if(max<pin[j][i]){
    max=pin[j][i];
    }
    }
pin_max_stilon[j]=max;
max=pin[j+1][i];
}
}

void min_grammon(float pin[SIZE][SIZE], float pin_min_grammon[SIZE],int N, int M){
int min=pin[0][0],i,j;
for(i=0;i<N;i++){
	pin_min_grammon[i]=0;
    for(j=0;j<M;j++){
    if(min>pin[i][j]){
    min=pin[i][j];
    }
    }
pin_min_grammon[i]=min;
min=pin[i+1][j];
    }
}

void min_stilon(float pin[SIZE][SIZE], float pin_min_stilon[SIZE],int N, int M){
int min=pin[0][0],i,j;
for(j=0;j<M;j++){
	pin_min_stilon[j]=0;
    for(i=0;j<N;i++){
    if(min>pin[j][i]){
    min=pin[j][i];
    }
    }
pin_min_stilon[j]=min;
min=pin[j+1][i];
}
}
