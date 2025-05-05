@interface TVLRetryer : NSObject
@property (nonatomic) BOOL valid;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)fireImmediately;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithTimeInterval:block:;
- (long long)currentRetryCount;
- (void)tick;
+ (id)retryerWithTimeInterval:block:;
@end
