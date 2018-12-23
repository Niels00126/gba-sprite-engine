//
// Created by 11401165 on 21/12/2018.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_LEVEL2_H
#define GBA_SPRITE_ENGINE_PROJECT_LEVEL2_H
#include "SceneLevel1.h"


class Level2: public SceneLevel1 {
private:
    std:: unique_ptr<Sprite> Wall;
    int score;
    //std::vector<std::unique_ptr<Ball>> ballen;
    //std::vector<std::unique_ptr<Sprite>> bullets;
public:
    Level2(std::shared_ptr<GBAEngine> engine, int total_score): SceneLevel1(engine), score(total_score) {}
    void tick(u16 keys);
    void load();
};


#endif //GBA_SPRITE_ENGINE_PROJECT_LEVEL2_H
