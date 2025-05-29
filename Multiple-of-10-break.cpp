#include <iostream>
using namespace std;
 
int main(){
int a;

do{
cout<<"Enter number : ";
cin>>a;
if((a%10==0)){
    cout<<"You entered a multiple of 10!"<<endl;
    break;
}
}while((a%10)!=0);

return 0;
}