#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"Inout a character: ";
    cin>>button;

    // if(button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Nameste"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Salut"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"Hola"<<endl;
    // }
    // else if(button=='e'){
    //     cout<<"Ciao"<<endl;
    // }
    // else if(button=='f'){
    //     cout<<"Salam"<<endl;
    // }
    // else{
    //     cout<<"I am still learning more"<<endl;
    // }
    
    switch(button)
    {
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Nameste"<<endl;
            break;        
        case 'c':
            cout<<"Salut"<<endl;
            break;
        case 'd':
            cout<<"Hola"<<endl;
            break;        
        case 'e':
            cout<<"Ciao"<<endl;
            break;
        default:
            cout<<"I am Still learning more!"<<endl;
            break;
    }
}