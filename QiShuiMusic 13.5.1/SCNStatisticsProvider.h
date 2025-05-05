@interface SCNStatisticsProvider : NSObject
- (int)startCollectingPerformanceStatisticsForPid:;
- (int)stopCollectingPerformanceStatisticsForPid:;
- (id)performanceStatisticsForPid:;
- (id)collectedShadersForPid:;
@end
