
#include "pch.h"
#include <iostream>

class IButton { public: virtual void print() = 0; };

class BlackButton : public IButton {
public: void print() { std::cout << "Black Button,"; }
};

class WhiteButton : public IButton {
public: void print() { std::cout << "White Button,"; }
};

class ILabel { public: virtual void print() = 0; };

class BlackLabel : public ILabel {
public: void print() { std::cout << "Black label,"; }
};

class WhiteLabel : public ILabel {
public: void print() { std::cout << "White label, "; }
};

class IText { public: virtual void print() = 0; };

class BlackText : public IText {
public: void print() { std::cout << "Black Text. "; }
};

class WhiteText : public IText {
public: void print() { std::cout << "White text.\n\n"; }
};

class ITheme
{
public:
    virtual IButton* GetButton() = 0;
    virtual ILabel* GetLabel() = 0;
    virtual IText* GetText() = 0;
    virtual void print() = 0;
};

class BlackTheme : public ITheme
{
public:
    virtual IButton* GetButton() { return new BlackButton(); }
    virtual ILabel* GetLabel() { return new BlackLabel(); }
    virtual IText* GetText() { return new WhiteText(); }
    virtual void print() { std::cout << "Black Theme\n"; }
};

class WhiteTheme : public ITheme
{
public:
    virtual IButton* GetButton() { return new WhiteButton(); }
    virtual ILabel* GetLabel() { return new WhiteLabel(); }
    virtual IText* GetText() { return new BlackText(); }
    virtual void print() { std::cout << "White Theme\n"; }
};


