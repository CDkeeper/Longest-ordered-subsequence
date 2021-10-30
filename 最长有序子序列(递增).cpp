#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		int L[n];
		fill(L,L+n,1);
		for(int i=0;i<n;i++){
			int max=1; 
			for(int j=i-1;j>=0;j--){
				if(a[j]<a[i]&&max<L[j]+1){
					L[i]=L[j]+1,max=L[j]+1;
				}
			}
		}
		int index=0;
		for(int i=0;i<n;i++)
			if(L[index]<L[i])
				index=i;
		cout<<L[index]<<endl;
		if(T)
		cout<<endl;                                                                                                                                                                                                
	}
}
