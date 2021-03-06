#include "main.h"
#include "AppDelegate.h"
#include "CCEGLView.h"
#include "UtilsMacro.h"

USING_NS_CC;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
    AppDelegate app;
    CCEGLView* eglView = CCEGLView::sharedOpenGLView();
    eglView->setViewName("SlappyPig");
	eglView->setFrameSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    return CCApplication::sharedApplication()->run();
}
