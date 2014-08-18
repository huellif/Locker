#include <aknkeylock.h>

LOCAL_C void ExeMainL()
{
    //enabling screensaver
    RProcess proc;
    if(proc.Create(_L("Z:\\sys\\bin\\Screensaver.exe"),KNullDesC)==KErrNone);
    {
        proc.Resume();
        proc.Close();
    }

    //locking the phone
    RAknKeyLock aKeyLock;
    CleanupClosePushL(aKeyLock);
    if(aKeyLock.Connect()==KErrNone)
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
    return error;
}
