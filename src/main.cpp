#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <includes/notif.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) return false;

        auto icon = cocos2d::CCSprite::create(Mod::get()->getResourcesDir() / "test.png");
        notifapi::fnotif("works", "info", 3.0f, {0,0,0}, 1.0f,
            notifapi::Position::TopRight, notifapi::Animation::Slide,
            "", 1.0f, icon);

        return true;
    }
};