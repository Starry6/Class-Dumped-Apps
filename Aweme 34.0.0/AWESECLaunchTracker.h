@interface AWESECLaunchTracker : NSObject
@property (nonatomic) NSString timing;
@property (nonatomic) SECMetrics metrics;
@property (nonatomic) double reportTime;
- (void)startAction:;
- (void)endAction:;
- (id)initWithTiming:;
- (void)reportInternal;
- (void)recordAlog;
- (void)report;
- (id)metrics;
- (id)timing;
- (void)setTiming:;
- (void)setMetrics:;
- (void).cxx_destruct;
- (double)reportTime;
- (void)setReportTime:;
+ (id)settings;
+ (unsigned long long)sample;
@end
