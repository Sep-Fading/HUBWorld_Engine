#include "textrenderer/TextRenderer.h"
#include "../window/window.h"


class EngineWindow : public Window {
public:
    EngineWindow(int width, int height, const char* title)
        : Window(width, height, title) {
    }

    virtual void MainLoop(TextRenderer textRenderer);

protected:
    virtual void Render(TextRenderer textRenderer);
};
