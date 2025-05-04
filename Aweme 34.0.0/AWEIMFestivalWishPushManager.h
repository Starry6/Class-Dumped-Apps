@interface AWEIMFestivalWishPushManager : NSObject
@property (nonatomic) NSDictionary notifySettingsConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pushSBCCouldHandleWithMsg:payload:businessType:;
- (void)setNotifySettingsConfig:;
- (id)notifySettingsConfig;
- (BOOL)p_couldDisplayNotificationWithPayload:;
- (BOOL)p_shouldFrequencyControlWithPayload:;
- (void)p_tryShowPushWithPayLoad:;
- (id)p_createPushModelWithUser:payload:;
- (void)p_showPushWithPushModel:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
