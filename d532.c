#include<stdio.h>//a004
#define MOD4(N) N%4
#define MOD100(N) N%100
#define MOD400(N) N%400

int main(){
    int start,end;
    int amount=0;
    scanf("%d%d",&start,&end);
    if(start%4)start+=4-start%4;
    for(int year=start;year<=end;year+=4){
        if(MOD4(year)==0 && MOD100(year)!=0 ||MOD400(year)==0)++amount;
    }
    printf("%d",amount);
}
