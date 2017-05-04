#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    const int size=128;
    char loremInpus[]=  "Lorem ipsum dolor sit amet ";
    char consectetur[]="consectetur adipiscing elit ";
    char finibus[]="In finibus";


    char* result=new char[size];

    strcpy(result,loremInpus);
    strcat(result,consectetur);
    strcat(result,finibus);


    qDebug()<<result;
    qDebug()<<"lenght: "+size;
    qDebug()<<sizeof(loremInpus)+sizeof(consectetur)+sizeof(finibus);
     delete result;
    return a.exec();
}
