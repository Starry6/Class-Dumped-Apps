@interface AWEIMBirthdayWishPushManager : NSObject
@property (nonatomic) NSDictionary notifySettingsConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pushSBCCouldHandleWithMsg:payload:businessType:;
- (BOOL)couldDisplayNotificationWithPayload:;
- (BOOL)p_checkSceneValid;
- (void)setNotifySettingsConfig:;
- (void)p_getLocalAWEIMUserFromPayload:;
- (void)p_createOnlineRemindPushModel:payload:;
- (void)p_showBirthdayWishPush:;
- (id)notifySettingsConfig;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
