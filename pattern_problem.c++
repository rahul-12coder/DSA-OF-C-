PATTERN PROBLEMS:

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }cout<<endl;
    }
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n=3;
    int number=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<number;
            number+=1;
        }cout<<endl;
    }
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n=3;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch+=1;
        }cout<<endl;
    }
return 0;
}


#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num;
        }cout<<endl;
        num++;
    }
return 0;
}


#include<iostream>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch;
        }cout<<endl;
        ch++;
    }
return 0;
}

#include<iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=1;i<=n;i++){
      for(int j=i;j>=1;j--){
         cout<<j;
      }cout<<endl;
   }
return 0;
}

#include<iostream>
using namespace std;
int main(){
   int n=4;
   // char ch='A';
   for(int i=0;i<n;i++){
   char ch='A';
      for(int j=i;j>=0;j--){
         cout<<ch;
         ch++;
      }cout<<endl;
   }
return 0;
}


#include<iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=0;i<n;i++){    //spaces
      for(int j=0;j<i;j++){
            cout<<" ";
      }
      for(int j=0;j<n-i;j++){
         cout<<i+1;
      }
      cout<<endl;
   }
   
return 0;
}



#include<iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=0;i<n;i++){
      // spaces 
      for(int j=0;j<n-i-1;j++){
         cout<<" ";
      }
      //num1
      for(int j=1;j<=i+1;j++){
         cout<<j;
      }
      //num2
      for(int j=i;j>=1;j--){
         cout<<j;
      }
      cout<<endl;
   }
   return 0;
}


HOLLOW DIAMOND PATTERN
#include<iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
         cout<<" ";
      }
      cout<<"*";
      if(i!=0){
         for(int j=0;j<2*i-1;j++){
            cout<<" ";
         }
         cout<<"*";
      }
      cout<<endl;
   }

   //BOTTOM
   for(int i=0;i<n-1;i++){
      for(int j=0;j<i+1;j++){
         cout<<" ";
      }
      cout<<"*";
      if(i!=n-2){
         for(int j=0;j<2*(n-i)-5;j++){
         cout<<" ";
      }
         cout<<"*";
      }
      cout<<endl;
   }
   
return 0;
}