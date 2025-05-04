@interface AWEInnerPushSceneAvoidanceController : NSObject
+ (id)pageIdOfCurrentHybridScene;
+ (BOOL)isRegisteredInnerPush:;
+ (BOOL)shouldAvoidCurrentSceneWithRequest:;
+ (BOOL)hitBasicScenesToAvoid;
+ (BOOL)shouldAvoidWithShowOnlyScenes:;
+ (BOOL)shouldAvoidWithExemptScenes:;
+ (id)allSupportedVerifiableScenes;
+ (id)defaultAvoidanceScenesConfigFromSettings;
+ (BOOL)isCurrentSceneChatCalling;
+ (BOOL)isCurrentSceneShootPublish;
+ (BOOL)isCurrentSceneLive;
+ (BOOL)isCurrentSceneBatman;
+ (BOOL)isCurrentSceneIMTab;
+ (BOOL)isCurrentSceneIMRoom;
+ (BOOL)isCurrentSceneFansDetail;
+ (BOOL)isCurrentSceneNotificationDetail;
+ (BOOL)isCurrentSceneUrgeUpdate;
+ (BOOL)isCurrentSceneMediaChoose;
+ (BOOL)isCurrentSceneRedPacket;
+ (BOOL)isCurrentSceneShakeBanner;
+ (BOOL)isCurrentTopVC:;
@end
