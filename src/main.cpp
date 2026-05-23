#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include "../includes/includes/notif.hpp"

using namespace geode::prelude;

class $modify(PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) return false;

        auto icon = cocos2d::CCSprite::create(geode::utils::string::pathToString(Mod::get()->getResourcesDir() / "test.png").c_str());
        notifapi::fnotif("This is a custom image example", "info", 3.0f, {0,0,0}, 1.0f,
            notifapi::Position::TopRight, notifapi::Animation::Slide,
            "", 1.0f, icon);

        return true;
    }
};
