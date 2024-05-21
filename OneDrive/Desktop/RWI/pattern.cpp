/*   	   1
           2*3
           4*5*6
           7*8*9*10
          */
           #include<iostream>
           using namespace std;
           
           int main()
           {
               int row=0;
               int col=0;
               int num=1;
               for(row=1 ;row<5;row++)
               {
                   
                   
                   for(col=0;col<row;col++)
                   {
                     
                       cout<<num;
                   
                       num++;
                       if(col<row-1)
                       cout<<"*";
                   }
                   cout<<endl;
                   
               }
           }