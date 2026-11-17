#include<stdio.h>
#include<stdlib.h>
void sort_2d(int row, int col, int arr[row][col])
{
    int n= row*col;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            int r1=j/col;
            int c1=j%col;

            int r2=(j+1)/col;
            int c2=(j+1)%col;

            if(arr[r1][c1] > arr[r1][c2])
            {
                  int temp = arr[r1][c1];
            arr[r1][c1]=arr[r2][c2];
            arr[r2][c2]=temp;
            }

           
        }
    }
}
void row_reverse(int row, int col, int arr[row][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col/2; j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[i][col-j-1];
            arr[i][col-j-1]=temp;
        }
    }

}
void col_reverse(int row, int col, int arr[row][col])
{
     for(int i=0; i<col; i++)
    {
        for(int j=0; j<row/2; j++)
        {
            int temp = arr[j][i];
            arr[j][i]=arr[row-j-1][i];
            arr[row-j-1][i]=temp;
        }
    }
    
}

void row_sort(int row, int col, int arr[row][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col-1; j++)
        {
            for(int k=0; k<col-j-1; k++)
            {
                if(arr[i][k] > arr[i][k+1])
                {
                    int temp = arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=temp;
                }
            }

        }
    }
}

void col_sort(int row, int col, int arr[row][col])
{
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row-1; j++)
        {
            for(int k=0; k<row-j-1; k++)
            {
                if(arr[k][i] > arr[k+1][i])
                {
                    int temp = arr[k][i];
                    arr[k][i]=arr[k+1][i];
                    arr[k+1][i]=temp;
                }
            }

        }
    }
}

void swap_diagonal(int row,int col, int arr[row][col])
// j=size-1-i
{
    for(int i=0; i<row; i++)
    {
        
            int temp = arr[i][i];
             arr[i][i]= arr[i][row-1-i];
             arr[i][row-1-i]=temp;
        
    }
}
void swap_rectangular_diagonal(int row,int col,int arr[row][col])
{
    int n =row<col?row:col;
    for(int i=0; i<n;i++)
    {
        int temp=arr[i][i];
        arr[i][i]=arr[i][col-i-1];
        arr[i][col-i-1]=temp;
    }   
}

void makr_zero_row_col(int row,int col,int arr[row][col])
{
    int row_flag=0,col_flag=0;
    for(int i=0; i<col; i++)
    {
        if(arr[0][i]==0)
        {
            row_flag=1;
            break;
        }
    }
    for(int i=0; i<row; i++)
    {
        if(arr[i][0]==0)
        {
            col_flag=1;
            break;
        }
    }

    for(int i=1; i<row; i++)
    {
        for(int j=1; j<col; j++)
        {
            if(arr[i][j]==0)
            {
                arr[0][j]=0;
                arr[i][0]=0;
            }
        }
    }

    
        for(int j=1; j<col; j++)
        {
            if(arr[0][j]==0)
            {
                for(int k=0; k<row; k++)
                {
                    arr[k][j]=0;
                }
            }
        }

        for(int i=1; i<row; i++)
        {
            if(arr[i][0]==0)
            {
                for(int k=0; k<col; k++)
                {
                    arr[i][k]=0;
                }
            }
        }

        if(row_flag==1)
        {
            for(int i=0; i<col; i++)
            arr[0][i]=0;
        }
        if(col_flag==1)
        {
            for(int i=0; i<row; i++)
            arr[i][0]=0;
        }
    
}

 void product_of_matrix(int row,int col,int arr[row][col],int row1,int col1,int arr1[row1][col1])
 {
    if(col != row1)
    {
        printf("Product of matrix invalid !\n");
        return;
    }
    int product[row][col1];
    int sum=0;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col1; j++)
        {
             int sum=0;
            for(int k=0; k<col; k++)
            {
                sum += arr[i][k]*arr1[k][j];
            }
            product[i][j]=sum;

        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col1; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

 }

 void find_missing_number(int row, int col, int arr[row][col])
 {
    int smallest=arr[0][0];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(smallest > arr[i][j])
            {
                smallest= arr[i][j];
            }
        }
    }
    int num =1, found=0;
    while(1)
    {
        for(int i=0; i<row; i++)
        {
            found=0;
            for(int j=0; j<col; j++)
            {
                if(num == arr[i][j])
                {
                   found=1;
                   break;
                }
            }
            if(found==1)
            {
            
                break;
            }
   
        }
        if(found==1)
        {
            num++;
            found=0;
            continue;
        }

        if(found==0)
        {
            printf("Smaaleest missing number is %d \n", num);
            return;

        }
        
       
    }
 }

 void sum_of_digonal_matrix(int row, int col, int arr[row][col])
 {
    int main_sum=0, anti_sum=0;
    for(int i=0; i<row; i++)
    {
          main_sum+=arr[i][i];
          
          anti_sum+=arr[i][col-i-1];
    }
    printf("daigonal main sum is %d and anti digonal matrix is %d\n", main_sum, anti_sum);
 }
 void magic_square(int n)
{
    if(n%2==0)
    {
        printf("cant generate magic swayre of even numbers:\n");
        return;
    }
    int (*arr)[n];
    arr = calloc(n,sizeof(int[n]));
    if(arr==NULL)
    {
        return;
    }
    int square = n *n;
    int num=1;
    int row=0, mid= n/2,  col=mid, old_row,old_col;

    arr[row][col] = num++;
    while(num <=square)
    {
        old_row=row;
        old_col=col;

        row--;
        col++;
        if(row<0)
        {
            row= n-1;
        }
        if(col >= n)
        {
            col =0;
        }
        if(arr[row][col]!=0)
        {
            row=(old_row+1)%n;
            col=old_col;
        }
        arr[row][col]=num++;
        for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                    printf("%3d", arr[i][j]);

                printf("\n");
            }
            printf("----------------\n");


    }
    int row_sum=0,col_sum=0,diag=0,anti_diag=0,sum=(n*(square+1))/2;
    for(int i=0; i<n; i++)
    {
        row_sum=0,col_sum=0;
        for(int j=0; j<n; j++)
        {
            row_sum+=arr[i][j];
            col_sum+=arr[j][i];
            if(i==j)
            {
               diag+=arr[i][i];
            }
           
            if(i+j==n-1)
            {
                anti_diag+=arr[i][j];
            }
        }
        if(row_sum!=sum || col_sum!=sum)
        {
            printf("magic generation failed! in row sum and col sum\n");
            free(arr);
            return;
        }
    }
    if(diag!=sum||anti_diag!=sum)
    {
         printf("magic generation failed!\n");
          printf("Diagonal = %d, Anti diagonal = %d, Expected = %d\n",
           diag, anti_diag, sum);

         
            free(arr);
            return;

    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    free(arr);
}



int main()
{
    int row, col;
    scanf("%d%d", &row,&col);
     int arr[row][col];
    printf("elememts:\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //  int row1, col1;
    // scanf("%d%d", &row1,&col1);
    //  int arr1[row1][col1];
    // printf("elememts:\n");
    // for(int i=0; i<row1; i++)
    // {
    //     for(int j=0; j<col1; j++)
    //     {
    //         scanf("%d", &arr1[i][j]);
    //     }
    // }

    
    // sort_2d( row, col, arr);
    // printf("after sorting\n");
    // for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // row_reverse(row,  col,  arr);
    //  for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // col_reverse(row,  col,  arr);
    //    for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // col_sort(row, col, arr);
    //     for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // row_sort(row, col, arr);
    //      for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }


    // swap_diagonal(row,col, arr);
    //      for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // swap_rectangular_diagonal( row, col,arr);
    //        for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // makr_zero_row_col(row, col, arr);
    // for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //  product_of_matrix(row,col,arr,row1,col1,arr1);

    // find_missing_number( row,  col,  arr);

    // sum_of_digonal_matrix( row, col, arr);
    //  int n;
    //  scanf("%d", &n);
    // magic_square(n);


    



}