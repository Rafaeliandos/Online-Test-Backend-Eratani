#include<bits/stdc++.h>
using namespace std;
typedef long long 11;
int res[1001];
int main (){
    int t;
    cin>>t;
    int j=1;
    for(int i=0; 1<1000; i++){
        while (j%3==0||j%10==3)j++;
        res[i]=j;j++;
    }

    while (t--){
        int tmp;
        scanf("%d", &tmp);
        printf("%d\n", res[tmp-1]);
    }
    return 0;
}
