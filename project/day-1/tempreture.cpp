#include<iostream>//引入输入输出流头文件

int main(){//主函数开始
    double Fah=0,Deg=0;//定义华氏度和摄氏度变量
    do
    {
    std::cout<<"华氏度："<<std::endl;//提示用户输入华氏度
    std::cin>>Fah;//输入华氏度
    while(Fah<0){ //判断输入是否小于0
        std::cout<<"输入错误，请重新输入："<<std::endl;//提示用户重新输入
        std::cin>>Fah;//重新输入华氏度
       
    }
    Deg=(Fah-32)*5/9;//计算摄氏度
    std::cout<<"摄氏度："<<Deg<<std::endl;//输出摄氏度
    }while(Fah!=999);//当输入的华氏度不等于999时，继续循环

    return 0;//程序结束
}
