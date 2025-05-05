@interface SFAnalyticsSampler : NSObject
@property (nonatomic) double samplingInterval;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL oncePerReport;
- (void)dealloc;
- (BOOL)oncePerReport;
- (void)setupPeriodicTimer;
- (void)newTimer;
- (void)setupOnceTimer;
- (void)pauseSampling;
- (void).cxx_destruct;
- (double)samplingInterval;
- (id)sampleNow;
- (void)resumeSampling;
- (id)name;
- (id)initWithName:interval:block:clientClass:;
- (void)setSamplingInterval:;
@end
