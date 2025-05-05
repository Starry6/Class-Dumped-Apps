@interface CRPerformanceStatistics : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BOOL measureRecentPeak;
@property (nonatomic) NSDictionary metrics;
- (id)dictionary;
- (void)setName:;
- (void)setMetrics:;
- (id)metrics;
- (id)initWithDictionary:;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)addStatistics:;
- (id)initWithName:measureRecentPeak:;
- (id)initWithStatistics:;
- (void)measureBlock:;
- (void)_addMetricWithKey:name:unit:denominator:pcMetricID:;
- (void)_evaluateEndedSession:duration:;
- (BOOL)measureRecentPeak;
+ (BOOL)_canEnableRecentPeakReset;
@end
