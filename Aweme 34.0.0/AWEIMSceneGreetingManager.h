@interface AWEIMSceneGreetingManager : NSObject
@property (nonatomic) NSDictionary notifySettingsConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pushSBCCouldHandleWithMsg:payload:businessType:;
- (void)setNotifySettingsConfig:;
- (void)p_getLocalAWEIMUserFromPayload:;
- (void)p_createOnlineRemindPushModel:payload:;
- (id)notifySettingsConfig;
- (void)p_showOnlineRemindPush:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
