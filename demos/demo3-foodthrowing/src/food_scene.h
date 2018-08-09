//
// Created by Wouter Groeneveld on 09/08/18.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_FOOD_SCENE_H
#define GBA_SPRITE_ENGINE_PROJECT_FOOD_SCENE_H


#include <libgba-sprite-engine/scene.h>
#include <libgba-sprite-engine/sprites/sprite_builder.h>
#include <libgba-sprite-engine/sprites/affine_sprite.h>

class FoodScene : public Scene {
private:
    std::unique_ptr<AffineSprite> avatar;
    std::vector<std::unique_ptr<Sprite>> bullets;
    int avatarRotation;

    std::unique_ptr<SpriteBuilder<Sprite>> spriteBuilder;
    std::unique_ptr<Sprite> createBullet();
    void removeBulletsOffScreen();

public:
    explicit FoodScene(const std::shared_ptr<GBAEngine> &engine);
    FoodScene(FoodScene& other) = delete;

    std::vector<Sprite *> sprites() override;
    std::vector<Background *> backgrounds() override;

    void load() override;
    void tick(u16 keys) override;

};


#endif //GBA_SPRITE_ENGINE_PROJECT_FOOD_SCENE_H