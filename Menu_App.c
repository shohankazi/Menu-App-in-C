
//A simple Menu Driven Application using C implementation
#include<stdio.h>
#include<conio.h>
int main(){
    int a1[10][10],b1[10][10],c1[10][10], a, b, c,k, choice, m, n,r,add_result,subtraction_result;
    printf("\n===================== MENU ===========================");
    printf("\n1. Matrix addition \n2. Matrix Subtraction \n3. Matrix multiplication \n4. Transpose of matrix \n5. Find the lower triangle of the matrix \n6. Find the upper triangle of the matrix");
    printf("\n======================================================");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    // Addition of the matrix
    case 1:
    {
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the First matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &a1[r][c]);
        }
    }
    printf("Print the values of the First matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", a1[r][c]);
    }
    printf("\n");
    }
    printf("Enter the values of the Second matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &b1[r][c]);
        }
    }
    printf("Print the values of the Second matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", b1[r][c]);
    }
    printf("\n");
    }
    printf("Addition of matrices: \n");
    for (r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            add_result = a1[r][c] + b1[r][c];
            printf("%5d", add_result);
        }
        printf("\n");
    }
}    
    break;

    // Subtraction of two matrix
    case 2:{
        printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the First matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &a1[r][c]);
        }
    }
    printf("Print the values of the First matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", a1[r][c]);
    }
    printf("\n");
    }
    printf("Enter the values of the Second matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &b1[r][c]);
        }
    }
    printf("Print the values of the Second matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", b1[r][c]);
    }
    printf("\n");
    }
    printf("Subtraction of matrices: \n");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            subtraction_result = a1[r][c] - b1[r][c];
            printf("%5d", subtraction_result);
        }
        printf("\n");
    }
}
    break;
    
    // Multiplication of two matrices
    case 3:{
        printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the First matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &a1[r][c]);
        }
    }
    printf("Print the values of the First matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", a1[r][c]);
    }
    printf("\n");
    }
    printf("Enter the values of the Second matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &b1[r][c]);
        }
    }
    printf("Print the values of the Second matrices: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", b1[r][c]);
    }
    printf("\n");
    }
    printf("Resultant of matrices: \n");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            c1[r][c] = 0;
        }
    }
    // Here are 3 nested loops
    for (r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            for(k = 0; k < m; k++){
                c1[r][c] = c1[r][c] + (a1[r][k] * b1[k][c]); // This is the main logic for multiplication of two matrices
            }
        }
    }
    // Show the resultant
    for(r = 0; r < m; r++){
        for(c = 0;c < n; c++){
            printf("%5d ",c1[r][c]);
        }
        printf("\n");
    }
    }
    break;
    // Transpose of matrix
    case 4:{
        printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &a1[r][c]);
        }
    }
    printf("Before Transpose: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", a1[r][c]);
    }
    printf("\n");
    }
    printf("After Transpose: \n");
    for(r = 0; r < m; r++){
        for(c = 0; c < n; c++){
            printf("%5d", a1[c][r]);
        }
        printf("\n");
    }
    }
    break;
    // Lower triangle of a matrix
    case 5:{
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &a1[r][c]);
        }
    }
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            printf("%5d", a1[r][c]); // Print the current values of matrix
        }
        printf("\n");
    }
    if (m != n)
    {
        printf("It is not a diagonal matrix");
    }
    else{
        printf("Lower Triangle: \n");
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                if(r >= c){
                    printf("%5d",a1[r][c]); // Print the lower triangle of the matrix
                }
            }
            printf("\n");
            
        }
        
    }
    }
    break;
    // Upper triangle of the matrix
    case 6:{
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the values of the matrices: ");
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            scanf("%d", &a1[r][c]);
        }
    }
    for (r = 0; r < m; r++)
    {
        for(c = 0; c < n; c++){
            printf("%5d", a1[r][c]); // Print the current values of matrix
        }
        printf("\n");
    }
    if (m != n)
    {
        printf("It is not a diagonal matrix");
    }
    else{
        printf("Upper Triangle: \n");
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                if(r <= c){
                    printf("%5d",a1[r][c]); // Print the upper triangle of the matrix
                }
                else{
                    printf("     ");
                }
            }
            printf("\n");
            
        }
    }
}
    break;
        default:
        printf("Invalid choice");
        break;
    }
}
