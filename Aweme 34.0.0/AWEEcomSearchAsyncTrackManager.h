@interface AWEEcomSearchAsyncTrackManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> executeQueue;
@property (nonatomic) BOOL enableAsync;
- (id)executeQueue;
- (void)setExecuteQueue:;
- (BOOL)enableAsync;
- (void)setEnableAsync:;
- (void)trackEvent:paramsBuilder:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
