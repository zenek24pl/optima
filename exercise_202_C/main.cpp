#include <QCoreApplication>
#include <QString>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString  loremInpus=  "Lorem ipsum dolor sit amet ";
    QString consectetur="consectetur adipiscing elit ";
    QString finibus="In finibus";

    QString result=loremInpus+consectetur+finibus;

    qDebug()<<"Size"<<result.size();
    qDebug()<<"SizeOf"<<sizeof(result);

    return a.exec();
}
