#include<stdio.h>

int arr[100001];

int main(){
	int n, m;
	long long max=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		if(max<arr[i]){
			max=arr[i];
		}
	}
	scanf("%d",&m);
	
	long long left=1, right=max, mid=0, sum=0;
	
	while(left<=right){
		mid=(left+right)/2;
		sum=0;
		for(int i=0; i<n; i++){
			if(mid<arr[i]){
				sum+=mid;
			}else{
				sum+=arr[i];
			}
		}
		if(sum>=m){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	
	printf("%d",right);
	
	return 0;
}
