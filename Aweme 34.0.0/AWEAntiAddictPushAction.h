@interface AWEAntiAddictPushAction : AWEAntiAddictBaseAction
- (void)showWithPushType:;
+ (void)showWithPushType:;
+ (id)triggerTypeWithPushType:;
+ (void)showInAppPushNoticeWithContentV2:triggerType:;
+ (id)settingModel;
@end
