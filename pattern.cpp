#include<iostream>
using namespace std;
/*int main(){
    int i;
    int j;
  int n = 4;
    for(i = 0;i<n;i++){
        for( j = 0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
output pattern
****
****
****
****     
int main(){
    int n ;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
pattern output
*
**
***
****
*****
******

int main(){
    int n;
cin>>n;
for(int i = 0;i<n;i++){
    for(int j = 1;j<i+1;j++){
        cout<<j;

    }
    cout<<endl;
}
    return 0;
}
optput patter
1
12
123
1234
12345

int main(){
    int n = 5;
    for(int i =  0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
output pattern
*****
****
***
**
*



    
int main(){
    int n = 5;
    for(int i =  0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
pattern output_iterator_tag12345
1234
123
12
1
 
int main(){
    int n = 5;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout<<"*";
        }
           for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
cout<<endl;
    }
    return 0;
}
pattern output
    *    
   ***
  *****  
 *******
*********

int main(){
    int n = 5;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        for(int j = 0;j< 2*n-(2*i +1);j++){
            cout<<"*";
        }
         for(int j = 0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
output pattern
*********
 *******
  *****
   ***
    * 
    
   int main(){
    int n = 5;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
         for(int i =  0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cout<<"*";
        }
       cout<<endl;  
    }

    return 0;
   }
*
**
***
****
*****
*****
****
***
**
*

    

int main(){
    int n = 5;
 int num = 1;
    for(int i = 0;i<n;i++){
 for(int j = 0;j<i+1;j++){
    cout<<num<<" ";
     num = num+1;

 }
 cout<<endl;

    }
    return 0;
}
output pattern 1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15


int main(){
    int n = 5;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
        
else cout<<" "; 

        }

        cout<<endl;
    }
    return 0;
}
*   *
*   *
*   *
*****
*/
