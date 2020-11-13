#include <iostream>
using namespace std;
class default_01{
    public:
        int count=0;
        int number=1;
    int input(){
        cout<<"ENTER A NUMBER"<<endl;
        cin>>number;
    }
    int proc_out(){
    for(int i=1;i<=number;i++){
        cout<<i<<" ";
        count++;
        if(count==10){
            cout<<endl;
            count=0;
        }
    }
    }
};
int main(){
    default_01 new1;
    new1.input();
    new1.proc_out();
    }
