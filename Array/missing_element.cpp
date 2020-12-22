//Missing element in an arithmetic Progression
#include<iostream>
using namespace std;

class Array
{
    int array[100];
    int capacity=100;
    int size;

public:
    Array()
    {
       cout<<"Enter size::"<<endl;
       cin>>size;

       cout<<"Enter elements::"<<endl;
       for(int i=0;i<size;i++)
            cin>>array[i];
    }

    int missing_element(void)
    {
        int d=array[1]-array[0];

        for(int i=0;i<size-1;i++)
        {
            if(array[i]+d==array[i+1])
                continue;
            else
            {
                return array[i]+d;
                break;
            }
        }
        return -1;
    }
};

int main(void)
{
    Array arr;
    int c;
    c=arr.missing_element();

    if(c==-1)
        cout<<"No element missing"<<endl;
    else
        cout<<"Missing element is "<<c<<endl;
    
    return 0;
}
