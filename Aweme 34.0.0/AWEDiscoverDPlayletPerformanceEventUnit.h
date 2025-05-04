@interface AWEDiscoverDPlayletPerformanceEventUnit : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
- (void)startWithInterval:;
- (void)trackForSeriesStageMonitor:;
- (double)delta;
- (double)endTime;
- (void)end;
- (double)startTime;
- (void)start;
@end
