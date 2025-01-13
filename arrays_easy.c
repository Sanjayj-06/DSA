/*largest element in a array*/
int max;
max = arr[0];
int i;
for (i = 0; i < n; i++) { // Loop goes from 0 to n-1 (exclusive)
    if (arr[i] > max) {
        max = arr[i];
    }
}
return max;

/*second largest element in a array*/
int main()
{
    int arr[7]={1,2,4,7,7,5,6};
    int n,i,largest,s_largest;
    n=7;
    largest=arr[0];
    s_largest=-1;
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            s_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>s_largest){
            s_largest=arr[i];
        }
    }
    printf("%d",s_largest);
}

