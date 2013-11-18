#include <apgtask.h>
#include <aknkeylock.h>
#include <coemain.h>

LOCAL_C void ExeMainL()
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
}

TInt E32Main()
{
    CCoeEnv* coe = new CCoeEnv;
    TRAPD(err, coe->ConstructL());
    TRAPD(error, ExeMainL());
    coe->DestroyEnvironment();
    return 0;
}
