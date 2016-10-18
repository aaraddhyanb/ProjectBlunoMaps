#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"
#include "Defs.h"

class MainScene : public Layer
{
    
public:

    static cocos2d::Scene* createScene();

    virtual bool init();
      
    bool onTouchBegan(cocos2d::Touch*, cocos2d::Event*);
    void onTouchEnded(cocos2d::Touch*, cocos2d::Event*);
    void onTouchMoved(cocos2d::Touch*, cocos2d::Event*);
    void onTouchCancelled(cocos2d::Touch*, cocos2d::Event*);
    
    CREATE_FUNC(MainScene);
    
    void update(float) override;
    
};

#endif // __MAIN_SCENE_H__
