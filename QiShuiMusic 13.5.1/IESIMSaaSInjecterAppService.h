@interface IESIMSaaSInjecterAppService : NSObject
- (BOOL)isPopupViewShowing;
- (BOOL)isPushNotificationEnabled;
- (BOOL)isShowingChatListPage;
- (BOOL)isUnFollowFamiliarForUser:;
- (BOOL)openSystemSettingInterface:;
- (BOOL)tapIMPushCanEnterMessagePage;
+ (id)sharedInstance;
@end
