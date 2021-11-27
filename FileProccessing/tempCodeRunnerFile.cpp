cin>>emptyRecord.acctNum>>emptyRecord.name>>emptyRecord.balance;
            //scanf("%d%s%lf", &emptyRecord.acctNum, emptyRecord.name, &emptyRecord.balance);
            fseek(fptr,(emptyRecord.acctNum-1)*sizeof(emptyRecord), SEEK_SET);
            fwrite(&emptyRecord,sizeof(emptyRecord),1,fptr);