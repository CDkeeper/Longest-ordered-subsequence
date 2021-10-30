#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	while(cin>>k&&k!=0){
		int a[k];
		for(int i=0;i<k;i++)
			scanf("%d",&a[i]);
		
		int L[k];
		for(int i=0;i<k;i++)
		 L[i]=a[i];
		for(int i=0;i<k;i++){
			int max=a[i]; 
			for(int j=i-1;j>=0;j--){
				if(max<L[j]+a[i]){
					L[i]=L[j]+a[i],max=L[j]+a[i];
				}
			}
		}
		int index=0;
		for(int i=0;i<k;i++)
			if(L[index]<L[i])
				index=i;
		cout<<L[index]<<endl;                                                                                                                                                                                             
	}
}
