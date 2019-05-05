#ifndef SCREEN1_VIEW_HPP
#define SCREEN1_VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen1View : public Screen1ViewBase
{
public:

	TextAreaWithOneWildcard txt;
 	Unicode::UnicodeChar txtBuffer[3];

    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateLEDState(bool);
    void updateTxt(int);
protected:
};

#endif // SCREEN1_VIEW_HPP