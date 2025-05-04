@interface AWEInteractInnerPushUtils : NSObject
+ (BOOL)isInSystemRecord;
+ (BOOL)checkScene:;
+ (BOOL)checkSceneValid:;
+ (BOOL)isShakePushShowing;
+ (BOOL)isChatPushShowing;
+ (BOOL)isLivePushShowing;
+ (BOOL)canShowInteractInnerPush:;
@end
