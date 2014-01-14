#include <aknkeylock.h>

LOCAL_C void ExeMainL()
{
    //enabling screensaver
    RProcess proc;
    User::LeaveIfError(proc.Create(_L("Z:\\sys\\bin\\Screensaver.exe"),KNullDesC));
    proc.Resume();
    proc.Close();

    //locking the phone
    RAknKeyLock aKeyLock;
    CleanupClosePushL(aKeyLock);
    User::LeaveIfError(aKeyLock.Connect());
    aKeyLock.EnableWithoutNote();
    CleanupStack::PopAndDestroy(&aKeyLock);
}

TInt E32Main()
{
    //creating CleanupStack
    CTrapCleanup* tl=CTrapCleanup::New();

    //Symbian C++ exception handling
    TRAPD(error, ExeMainL());

    delete tl;
}
