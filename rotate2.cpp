void rotate(int a[], unsigned size, int shift)
{
    if (shift == 0) return;
    for (int k = 0; k < shift; k++){
        int temp = a[0];
        for (int i = 0;i < (size - 1); i++)
            a[i] = a[i+1];
        a[size-1] = temp;
    }
}
