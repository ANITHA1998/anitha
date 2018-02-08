#include<stdio.h>
#include<algorithm>
int main() 
{
int num, X,i,ub,lb,search_num,mid,flag;
clrscr();
printf("enter the size of array=");
scanf("%d",&num);
scanf("%d",&X);
int arr[num];
for(i=0;i<num;i++)
    scanf("%d",&arr[i]);
sort(arr,arr+num);
for(i=0;i<num;i++)
{
  search_num=X-arr[i];
    lb=0,ub=num-1,flag=0;
    if(search_num>0)
    {
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(arr[mid]==search_num)
            {
                flag=1;
                break;
            }
            else if(arr[mid]>search_num)
                ub=mid-1;
            else
                lb=mid+1;
        }
    }
    if(flag==1&&mid!=i){
        printf("(%d,%d)\n",arr[i],arr[mid]);
       num=num-1; //decreasig the size of the array to stop reapeating ans like (1,11) (11,1)//
    }
}
return 0;
}

