#include <apgtask.h>
#include <aknkeylock.h>

int main(int argc, char *argv[])
{    
    RProcess proc;
    User::LeaveIfError(proc.Create(_L("screensaver.exe"),KNullDesC));
    proc.Resume();
    proc.Close();
    RAknKeyLock aKeyLock;    
    CleanupClosePushL(aKeyLock);
    User::LeaveIfError(aKeyLock.Connect());
    aKeyLock.EnableWithoutNote();
    CleanupStack::PopAndDestroy(&aKeyLock);
    return 0;
}
