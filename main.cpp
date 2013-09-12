#include <QProcess>
#include "aknkeylock.h"

int main(int argc, char *argv[])
{
    QProcess *myProcess = new QProcess;
    myProcess->start("screensaver.exe");
    RAknKeyLock aKeyLock;
    aKeyLock.Connect();
    aKeyLock.EnableWithoutNote();
    aKeyLock.Close();
    return 1;
}
