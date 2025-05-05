@interface FMSynchronizer : NSObject
@property (nonatomic) BOOL timeoutOccurred;
@property (nonatomic) double timeout;
@property (nonatomic) NSString info;
@property (nonatomic) NSObject<OS_dispatch_semaphore> sem;
- (void)signal;
- (void)setInfo:;
- (void)setTimeout:;
- (void)setTimeoutOccurred:;
- (void)setSem:;
- (void)wait;
- (void).cxx_destruct;
- (BOOL)timeoutOccurred;
- (double)timeout;
- (id)info;
- (id)sem;
- (id)initWithDescription:andTimeout:;
@end
