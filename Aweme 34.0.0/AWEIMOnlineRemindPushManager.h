@interface AWEIMOnlineRemindPushManager : NSObject
@property (nonatomic) NSMutableDictionary safeCheckDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)anchorEndLive;
- (void)anchorLeaveGuidePage;
- (void)handleNoticeInAppPushNotification:;
- (BOOL)checkSceneValid;
- (BOOL)shouldFrequencyControl:;
- (BOOL)canShowOnlineRemindPushForSecUid:;
- (void)p_showOnlineRemindPush:;
- (void)retryPush;
- (void)setSafeCheckDict:;
- (BOOL)p_safeCheck:;
- (BOOL)p_shouldFrequencyControl:;
- (id)safeCheckDict;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
