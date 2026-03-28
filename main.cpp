#include<iostream>
using namespace std;
int main(){
    char startvalue;
    char choiceAgain;
    float onlineshopping(void);
    startLevel:
    cout<<" Please press s to start Shopping"<<endl;
    cin>>startvalue;
   start:
    if(startvalue=='s'|| startvalue=='s'){
      float totalAmount=onlineshopping() ; 
      cout<<"Total BillAmount is "<<totalAmount;
      shopAgain:
      cout<<"Do you want shopping again,yes or no "<<endl;
      cin>>choiceAgain;
      if(choiceAgain=='y'  || choiceAgain=='Y' ){
     goto startLevel;
      }
      else if(choiceAgain=='n'||choiceAgain=='N'){
        cout<<"Thanks for shopping"<<endl;
      }
      else{
       cout<<"You have entered worng option,please plase type again"<<endl;
        goto shopAgain ;
      }
    }
    else{
        cout<<"You have entered worng option,please s"<<endl;
        goto start;
    }
}
float onlineshopping(){
 char choice ; 
 char item;
 int quantity;
 float BillAmount=0; 
cout<<"*******Welcome to online shopping*******"<<endl;
cout<<"------Please follow the instruction------"<<endl;
cout<<"(1)Please enter m to order mobile phones"<<endl;
cout<<"(2)Please enter l to order laptops "<<endl;
cout<<"(3)Please enter d to order desktops "<<endl;
cout<<"(4)Please enter s to order speaker "<<endl;
cout<<"(5)Please enter h to order headphone"<<endl;
cin>>choice;

//**********mobile**********//
if(choice=='m'||choice=='M'){
   mobilelevel: 
cout<<"Mobile details"<<endl;
cout<<"(1)Apple=>Price : 40000"<<endl;
cout<<"(2)Vivo=>Price : 25000"<<endl;
cout<<"(3)Oppo=>Price : 20000"<<endl;
cout<<"(4)Redmi=>Price : 18000"<<endl;
cout<<"(5)Realmi=>Price : 17000"<<endl;
cout<<"(6)Samsug=>Price : 25000"<<endl;
cout<<"Please enter your choice"<<endl;
cin>>item;
if(item=='1'){
cout<<"Enter quantity"<<endl;
cin>>quantity;
BillAmount=BillAmount+quantity*40000;
}
else if(item=='2'){
  cout<<"Enter quantity"<<endl;
cin>>quantity;
BillAmount=BillAmount+quantity*25000;

}
else if(item=='3'){
  cout<<"Enter quantity"<<endl;
cin>>quantity;
BillAmount=BillAmount+quantity*20000;

}
else if(item=='4'){
  cout<<"Enter quantity"<<endl;
cin>>quantity;
BillAmount=BillAmount+quantity*18000;

}
else if(item=='5'){
  cout<<"Enter quantity"<<endl;
cin>>quantity;
BillAmount=BillAmount+quantity*17000;

}
else if(item=='6'){
  cout<<"Enter quantity"<<endl;
cin>>quantity;
BillAmount=BillAmount+quantity*25000;

}
else{
cout<<"You have entered worng option, please type again"<<endl;
goto mobilelevel;
}

}


return BillAmount;

}














