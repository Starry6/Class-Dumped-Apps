@interface ISAVPlayer : AVPlayer
@property (nonatomic) NSObject<OS_dispatch_queue> actualDispatchQueue;
- (void)setRate:;
- (id)init;
- (void)dealloc;
- (id)dispatchQueue;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:;
- (void)setUsesDedicatedNotificationQueueForMediaServices:;
- (void)setAllowsPixelBufferPoolSharing:;
- (void)playToTime:withInitialRate:overDuration:progressHandler:;
- (void)_setRate:;
- (void)_cancelRateCurveRequest;
- (id)actualDispatchQueue;
+ (BOOL)isAppleInternal;
+ (BOOL)isSpringBoard;
@end
