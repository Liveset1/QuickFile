#include <stdio.h>
#include <windows.h>
#include <Win32Gui.h>
int main() {
    Win32AppData *appData;
    Win32Size size = {800, 600, 200, 200, 800, 600};
    Win32Window *window;

    appData = initialize_app_data("App", size, WS_OVERLAPPEDWINDOW | WS_SIZEBOX);
    window = initialize_window("Hello", appData, NULL);

    if (!window) {
        printf("Error: window creation not working!");
        return -1;
    }
    set_window_visibility(window, 1);
    
    while (is_window_running(window)) {
        window_poll_events();
    }
    printf("%d", is_window_running(window));
    destroy_win32_window(window);
    getchar();
    return 0;
}