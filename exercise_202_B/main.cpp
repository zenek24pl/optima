#include <QCoreApplication>
#include <QDebug>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::string loremInpus=  "Lorem ipsum dolor sit amet ";
    std::string consectetur="consectetur adipiscing elit ";
    std::string finibus="In finibus";


    std::string result;
    result=loremInpus+consectetur+finibus;

    std::cout<<result<<std::endl;
    std::cout<<"Size :"<<result.size()<<std::endl;
    std::cout<<"Size of:"<<sizeof(result)<<std::endl;

    return a.exec();
}
