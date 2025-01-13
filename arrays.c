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
