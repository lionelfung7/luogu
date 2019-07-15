#include<bits/stdc++.h>
    using namespace std;
    int a,b,c,flag=0;//flag????,???????????No!!!
    int j,k;
    int main()
    {
        scanf("%d%d%d",&a,&b,&c);
        for(int i=(123/a+min(123%a,1))*a;i<=987/a*a;i+=a)//?????????????i???a??
        {
            j=i/a*b;
            k=i/a*c;
            if(j>=100&&j<=999&&k>=100&&k<=999)//???j?k,????3??,???????1-9
            {
                int l[10],sum=0,xx=1;
                l[1]=i/100;
                l[2]=i/10%10;
                l[3]=i%10;
                l[4]=j/100;
                l[5]=j/10%10;
                l[6]=j%10;
                l[7]=k/100;
                l[8]=k/10%10;
                l[9]=k%10;//??9???
                for(int _i=1;_i<=9;_i++)
                {
                    sum+=l[_i];//?????
                    xx*=l[_i];//?????
                }
                if(sum==45&&xx==362880)//??1-9????????
                {
                    flag=1;
                    printf("%d %d %d\n",i,j,k);//??i??????,???????????????
                }
            }
        }
        if(flag==0)printf("No!!!");//??????No!!!
        return 0;
    }
