#include<iostream>
#include<random>

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>distrib(1,100);
    int rad=distrib(gen),ans=0;
    std::cout<<"请猜一个1~100的数字"<<std::endl;
    std::cin>>ans;
    do{
       if(ans<rad)
       {
          std::cout<<"猜小了，请重猜："<<std::endl;
          std::cin>>ans;
       }
       else if(ans>rad)
       {
          std::cout<<"猜大了，请重猜："<<std::endl;
          std::cin>>ans;
       }
      }while(ans!=rad);
          std::cout<<"恭喜你猜对了"<<std::endl;
          return 0;
}
