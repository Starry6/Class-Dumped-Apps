@interface AWEDeepLinkMonitor : NSObject
@property (nonatomic) BOOL isColdLaunchFromShortCut;
@property (nonatomic) NSMutableDictionary sessionsMap;
@property (nonatomic) NSMutableDictionary sessionStash;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) double startTime;
@property (nonatomic) NSDictionary currentMonitorParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sessionsMap;
- (id)sessionForURL:needCreate:fuzzy:;
- (void)stashSession:forScene:;
- (id)unStashSession:;
- (void)aliasSession:aliasURLString:;
- (id)sessionStash;
- (id)sessionIDForURL:;
- (void)startTimerForSession:;
- (void)timeoutForSession:;
- (void)setSessionsMap:;
- (BOOL)isColdLaunchFromShortCut;
- (void)setIsColdLaunchFromShortCut:;
- (void)setSessionStash:;
- (void)recordMonitorResultWhenAppStart:;
- (void)routerDidBeginTransferWithURLString:;
- (void)routerDidTransferWithURLString:fromViewController:toViewController:transitionType:;
- (void)routerDidFailTransferingWithURLString:errorMessage:;
- (void)setCurrentMonitorParams:;
- (id)currentMonitorParams;
- (id)init;
- (id)workQueue;
- (void)setStartTime:;
- (void)encodeWithCoder:;
- (void)setWorkQueue:;
- (void).cxx_destruct;
- (double)startTime;
- (id)initWithCoder:;
- (void)appWillResignActive;
+ (BOOL)isColdLaunch;
+ (void)reportMonitorResultWithStayTime:;
+ (id)sessionForURL:needCreate:fuzzy:;
+ (void)stashSession:forScene:;
+ (id)unStashSession:;
+ (void)aliasSession:aliasURLString:;
+ (BOOL)needCache;
+ (void)_reportOfflineSessionsIfNeeded:;
+ (void)reportOfflineSessionsIfNeeded;
+ (void)saveToDiskIfNeeded:;
+ (void)clean:;
+ (void)_aweLazyRegisterLoad;
+ (BOOL)isColdLaunchAndReceivedOpenURL;
+ (BOOL)isColdLaunchAndReceivedPush;
+ (BOOL)isColdLaunchAndShortCut;
+ (void)setIsColdLaunchAndReceivedPush:;
+ (void)setIsColdLaunchAndReceivedOpenURL:;
+ (void)reportMonitorResult;
+ (void)setIsColdLaunchAndShortCut:;
+ (id)sharedInstance;
+ (double)timeout;
+ (BOOL)enabled;
+ (double)appLaunchTime;
@end
