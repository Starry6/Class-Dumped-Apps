@interface AWEFeedCacheCenterUtilManager : NSObject
@property (nonatomic) NSTimer safetyCheckTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)addNotifications;
- (void)triggerSafetyCheck;
- (void)setSafetyCheckTimer:;
- (id)safetyCheckTimer;
- (void)handleVideoSafetyCheckWithResults:;
- (void)clearDuplicatedCacheFromFeedRequest:;
- (void)appDidEnterBackground:;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
