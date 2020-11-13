#include<iostream>
using namespace std;
class sort(){
    public:
        int totalelements;
        int search_element;
        
       int inputdata(){             //takes array index and array elements
           cout<<"Enter number of elements"<<endl;
           cin>>totalelements;
           int fullarray1[totalelements+1];
           cout<<"Enter elements in increasing order"<<endl;
           for(i=0;i<=totalelements;i++){
               cin>>fullarray1[totalelements];
           }
           cout<<"Enter search element"<<endl;
           cin>>search_element;
       }
       int process(){
           int mid, beg, end;
           beg=0;
           totalelements--;
           end=totalelements;
           mid=(beg+end)/2;
           while(mid!=search_element){
               if(search_element>mid){
                   end=mid+1;
               }
               else end=mid-1;
           }
       }
       int output(); 
}