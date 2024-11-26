# DSA-OF-C++-
#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<a;
    return 0;
}

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
