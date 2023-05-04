#include <stdio.h>
#include <windows.h>
#include <MMsystem.h>

int main () 
  {
    PlaySound(TEXT("//Relative Path of your Song File(WAV)"), NULL, SND_ASYNC);
    // * Insert Code * // 
    PlaySound(TEXT("//Relative Path of your Song File(WAV)"), NULL, SND_SYNC);
    return 0;
}
