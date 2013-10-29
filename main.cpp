#include <apacmdln.h>
#include <apgcli.h>
#include "aknkeylock.h"

int main(int argc, char *argv[])
{
    CApaCommandLine* commandLine = CApaCommandLine::NewLC();
    commandLine->SetCommandL(EApaCommandRun);
    commandLine->SetExecutableNameL(_L("screensaver.exe"));
    RApaLsSession apaLsSession;
    User::LeaveIfError(apaLsSession.Connect());
    CleanupClosePushL(apaLsSession);
    User::LeaveIfError(apaLsSession.StartApp(*commandLine));
    CleanupStack::PopAndDestroy(&apaLsSession);
    CleanupStack::PopAndDestroy(commandLine);
    RAknKeyLock aKeyLock;
    User::LeaveIfError(aKeyLock.Connect());
    aKeyLock.EnableWithoutNote();
    aKeyLock.Close();
    return 0;
}
