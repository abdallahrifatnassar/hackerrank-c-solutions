int bitwise_and(int n, int* arr)
{
    int a=0;
    
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            int y=arr[i]&arr[j+i+1];
            if(y>0)
            {
                int x=y & (y-1);
                if(x==0)
                {
                    a+=1;
                }
            }
        }
    }
    return a;
}
