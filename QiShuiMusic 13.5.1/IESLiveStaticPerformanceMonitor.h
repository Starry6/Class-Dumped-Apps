@interface IESLiveStaticPerformanceMonitor : NSObject
@property (nonatomic) q slowSession;
@property (nonatomic) double sampleRate;
- (void)setSlowSession:;
- (long long)slowSession;
- (id)toDic;
- (double)sampleRate;
- (id)copyWithZone:;
- (void)setSampleRate:;
@end
