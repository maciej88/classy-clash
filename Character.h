#include "raylib.h"
#include "BaseCharacter.h"

class Character : public BaseCharacter
{
public:
    Character(int winWidth, int winHeight); // <- konstruktor
    virtual void tick(float deltaTime) override;
private:

};