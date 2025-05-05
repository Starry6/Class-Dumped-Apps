@interface IESGurdAutoRequestManager : NSObject
@property (nonatomic) NSArray requestInfosArray;
@property (nonatomic) NSTimer autoRequestTimer;
- (void)autoRequestIfNeeded;
- (id)autoRequestTimer;
- (void)autoRequestTimerFired;
- (void)handleAutoRequest;
- (void)handlePollingInfosDictionary:;
- (void)handleRequestConfig:;
- (void)handleRequestInfosArray:;
- (void)handleRequestMeta:;
- (void)registerAccessKeysArray:;
- (void)registerNotificationOnce;
- (id)requestInfosArray;
- (void)setAutoRequestTimer:;
- (void)setRequestInfosArray:;
- (void)setupTimerIfNeeded;
- (void)invalidateTimer;
- (void)dealloc;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
+ (id)sharedManager;
@end
