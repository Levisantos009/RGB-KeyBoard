#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <cstdlib>
#include <iostream>
#include <winuser.h>

int main () {

    
    for(;;){
        INPUT inputs[1] = {};

        inputs[0].type = INPUT_KEYBOARD;
        inputs[0].ki.wVk = VK_SCROLL;
    
        UINT uSent = SendInput(1, inputs, sizeof(INPUT));
        
        Sleep(200);

        inputs[0].ki.dwFlags = KEYEVENTF_KEYUP;

        uSent = SendInput(1, inputs, sizeof(INPUT));
    
        
    }

    
   
    
    
   

}
