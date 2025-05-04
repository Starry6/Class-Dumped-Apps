@interface AWEPostPageListBatchUpdatesCombiner : NSObject
@property (nonatomic) BOOL isCombining;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) double timeThreshold;
- (void)setIsCombining:;
- (BOOL)isCombining;
- (void)resumeTimerWithDuration:completion:;
- (void)cancelTimerIfNeeded;
- (void)combineWithBatchUpdates:;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimeThreshold:;
- (double)timeThreshold;
@end
