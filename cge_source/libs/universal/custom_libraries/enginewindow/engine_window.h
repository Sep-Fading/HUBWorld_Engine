#include "../window/window.h"

class EngineWindow : public Window {
public:
    EngineWindow(int width, int height, const char* title)
        : Window(width, height, title) {
    }

    virtual void MainLoop() override;

protected:
    virtual void Render() override;
};
