#include <stdio.h>

int arr[1000001];

int main(){
	int n, m;
	scanf("%d %d",&n,&m);
	long long max=0;
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		if(max<arr[i]){
			max=arr[i];
		}
	}
	long long left=1, right=max, mid=0, sum=0, c_max=0;
	
	while(left<=right){
		mid=(left+right)/2;
		sum=0;
		for(int i=0; i<n; i++){
			if(arr[i]/mid>0){
				sum+=arr[i]-mid;
			}
		}
		if(sum>=m){
			left=mid+1;
			if(c_max<mid){
				c_max=mid;
			}
		}
		else if(sum<=m){
			right=mid-1;	
		}
	}
	printf("%d",c_max);
	
	
	return 0;
}
