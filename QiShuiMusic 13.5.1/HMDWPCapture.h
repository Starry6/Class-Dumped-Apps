@interface HMDWPCapture : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString protectType;
@property (nonatomic) NSString protectSelector;
@property (nonatomic) NSArray backtraces;
@property (nonatomic) NSString log;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double blockTimeInterval;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) BOOL mainThread;
- (id)protectSelector;
- (void)setProtectType:;
- (double)blockTimeInterval;
- (double)inAppTime;
- (id)protectType;
- (void)setBlockTimeInterval:;
- (void)setMainThread:;
- (void)setProtectSelector:;
- (id)init;
- (id)log;
- (BOOL)isMainThread;
- (id)backtraces;
- (void)setType:;
- (void)setLog:;
- (void)setBacktraces:;
- (double)timeoutInterval;
- (unsigned long long)type;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setTimeoutInterval:;
+ (id)captureCurrentBacktraceWithSkippedDepth:;
@end
