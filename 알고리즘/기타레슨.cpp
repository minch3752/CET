#include<stdio.h>

int arr[100000];

int main(){
	int n, m, left=0, right=0, mid=0;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		scanf("%d",arr[i]);
		right+=arr[i];
		if(left<arr[i]){
			left=arr[i];
		}
	}
	
	int cnt=0, temp=0;
	while(left<=right){
		temp=0;
		mid=(left+right)/2;
		
		for(int i=0; i<n; i++){
			temp+=arr[i];
			if(arr[i]>mid){
				break;
			}
			if(temp>mid){
				cnt++;
				temp=arr[i-1];
			}else{
				continue;
			}
		}
		if(cnt<=m){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	printf("%d",left); 
	
	return 0;
}
