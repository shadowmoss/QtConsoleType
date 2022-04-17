#include <QtCore/QCoreApplication>

int main(int argc, char *argv[])
{
    qint8 m;
    QCoreApplication a(argc, argv);
    printf("sizeof(uchar)=%d B\n", sizeof(uchar));
    printf("sizeof(qint8)=%d B\n", sizeof(m));
    printf("sizeof(quint8)=%d B\n", sizeof(quint8));
    printf("sizeof(ushort)=%d B\n", sizeof(ushort));
    printf("sizeof(qint16)=%d B\n", sizeof(qint16));
    printf("sizeof(qint32)=%d B\n", sizeof(qint32));
    printf("sizeof(quint32)=%d B\n", sizeof(quint32));
    printf("sizeof(ulong)=%d B\n", sizeof(ulong));
    printf("sizeof(qlonglong)=%d B\n", sizeof(qlonglong));
    return a.exec();
}
