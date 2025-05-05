@interface GEONavdAnalyticsManager : NSObject
@property (nonatomic) <GEONavdAnalyticsReporter> analyticsReporter;
- (void).cxx_destruct;
- (id)analyticsReporter;
- (void)setAnalyticsReporter:;
+ (id)sharedManager;
@end
