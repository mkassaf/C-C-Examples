#include<iostream>
#include <stdio.h>
using namespace std;

struct bankClient{int acctNum; char name[20]; double balance;};
int main(){
	bankClient emptyRecord={0, "", 0};
	int i, j, account;
	FILE* fptr=NULL;
    if((fptr=fopen("numbers.dat","wb"))== NULL) {
        printf("Unable to open data.txt\n");
    } else {
    for(i=0; i<3; i++){
            fwrite(&emptyRecord,sizeof(emptyRecord),1,fptr);
        }
        
        for(j=0; j<3; j++){
            cin>>emptyRecord.acctNum>>emptyRecord.name>>emptyRecord.balance;
            //scanf("%d%s%lf", &emptyRecord.acctNum, emptyRecord.name, &emptyRecord.balance);
            fseek(fptr,(emptyRecord.acctNum-1)*sizeof(emptyRecord), SEEK_SET);
            fwrite(&emptyRecord,sizeof(emptyRecord),1,fptr);
        }
        fclose(fptr);
    }
    if((fptr=fopen("numbers.dat","rb"))== NULL){
            printf("Unable to open data.txt\n");
    } else{
        for(i=0; i<3; i++){
            fread(&emptyRecord,sizeof(emptyRecord),1,fptr);
            cout<<i << " "<<emptyRecord.acctNum<<"\t"<<
            emptyRecord.balance<<"\t"<<emptyRecord.name<<endl;
        }
        cout<<"\nEnter account number: \n";
        cin>>account;            
        fseek(fptr,(account-1)*sizeof(emptyRecord), SEEK_SET);
        fread(&emptyRecord,sizeof(emptyRecord),1,fptr);
        cout<<emptyRecord.acctNum<<"\t"<<
        emptyRecord.balance<<"\t"<<emptyRecord.name<<endl;
        fclose(fptr);
    }//end of else
}//end of main
