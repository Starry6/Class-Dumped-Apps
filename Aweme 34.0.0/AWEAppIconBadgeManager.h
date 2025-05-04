@interface AWEAppIconBadgeManager : NSObject
@property (nonatomic) BOOL imReady;
@property (nonatomic) HMDThreadSafeDictionary trackParams;
@property (nonatomic) BOOL feedReady;
- (id)trackParams;
- (void)setTrackParams:;
- (void)handleAppBadgeNumberOnActiveChange;
- (void)cleanAppBadgeNumberAndKeepNotification;
- (BOOL)feedReady;
- (void)updateAppBadgeNumberFromNoticeManager;
- (void)setFeedReady:;
- (BOOL)enableRedBadgeEqualMessageTabNumber;
- (void)setSourceOfTrackParam:count:;
- (BOOL)imReady;
- (BOOL)enableRedBadgeFakeNumber;
- (void)setApplicationBadgeNumber:withCallback:;
- (void)updateAppBadgeNumberAndKeepNotificitaion:;
- (id)aAWEAppIconBadgeCommonAdapter;
- (id)sourceOfTrackParam;
- (void)onfeedReady;
- (void)setImReady:;
- (id)init;
- (void)applicationDidEnterBackground;
- (void).cxx_destruct;
+ (Class)aAWEAppIconBadgeCommonAdapterClass;
+ (id)sharedManager;
@end
