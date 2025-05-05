@interface BDASplashSemiRealtimeManager : NSObject
@property (nonatomic) q realtimeState;
@property (nonatomic) q pendingTime;
@property (nonatomic) BOOL isWarmStart;
- (void)setPendingTime:;
- (id)initWithIsWarmStart:;
- (long long)pendingTime;
- (long long)realtimeState;
- (void)setRealtimeState:;
- (void)startDownloadTaskWithRealtimeModel:;
- (void)startRealtimeTaskWithJsonData:;
- (void)startRemoteDownloadTaskWithRealtimeModel:;
- (void)startRequestTask;
- (BOOL)startSemiRealtimeTask;
- (void)startTimeOutTask;
- (void)trackDisplayEventWithReason:;
- (BOOL)isWarmStart;
- (void)setIsWarmStart:;
+ (BOOL)requestSemiRealtimeIsWarmStart:;
+ (long long)canRequestSemiRealtimeWithIsWarmStart:;
+ (void)saveSemiRealtimeFlagWithIsWarmStart:;
@end
