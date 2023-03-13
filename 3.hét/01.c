#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Sum(int *tomb,int n);
int Min(int *tomb,int n);
int Max(int *tomb,int n);
int SumR(int *tomb,int n);
int MinR(int *tomb,int n);
int MaxR(int *tomb,int n);

int main(int argc, char* argv[])
{
	FILE *fp;
	fp=fopen("asd.txt","r");
	int idg;
	int db=0;
	while(fscanf(fp,"%d",&idg)==1){
		db++;
	}
	fclose(fp);
	int tomb[db];
	fp=fopen("asd.txt","r");
	for(int i=0;i<db;i++){
		fscanf(fp,"%d",&tomb[i]);
	}
	fclose(fp);
	clock_t begin = clock();
	int osszeg=Sum(tomb,db);
	int min=Min(tomb,db);
	int max=Max(tomb,db);
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC*1000;
	printf("Sum:%d\nMin:%d\nMax:%d\n",osszeg,min,max);
	printf("Time:%lf\n",time_spent);
	begin = clock();
	osszeg=SumR(tomb,db-1);
	min=MinR(tomb,db-1);
	max=MaxR(tomb,db-1);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC*1000;
	printf("Sum:%d\nMin:%d\nMax:%d\n",osszeg,min,max);
	printf("Time:%lf",time_spent);
	return 0;
}


int Sum(int *tomb,int n){
	int idg=0;
	for(int i=0;i<n;i++){
		idg+=tomb[i];
	}
	return idg;
}
int SumR(int *tomb,int n){
	int sum=0;
	if(n!=0){
		sum+=SumR(tomb,n-1)+tomb[n];
		return sum;
	}else{return tomb[0];}
}
int Min(int *tomb,int n){
	int idg=0;
	for(int i=1;i<n;i++){
		if(tomb[idg]>tomb[i]){
			idg=i;
		}
	}
	return tomb[idg];
}
int MinR(int *tomb,int n){
	int idg=tomb[n];
	if(n>0){
		idg=MinR(tomb,n-1);
		if(idg>tomb[n]){
			return tomb[n];
		}else{
			return idg;
		}
	}else{
		return tomb[0];
	}
}
int Max(int *tomb,int n){
	int idg=0;
	for(int i=1;i<n;i++){
		if(tomb[idg]<tomb[i]){
			idg=i;
		}
	}
	return tomb[idg];
}
int MaxR(int *tomb,int n){
	int idg=tomb[n];
	if(n>0){
		idg=MaxR(tomb,n-1);
		if(idg<tomb[n]){
			return tomb[n];
		}else{
			return idg;
		}
	}else{
		return tomb[0];
	}
}
