@interface TVLMonitor : NSObject
@property (nonatomic) BOOL shouldReportTimeSeries;
@property (nonatomic) double playingEventTimeInterval;
- (id)reportDataWithLogType:userInfo:;
- (id)liveSdkVersion;
- (double)playingEventTimeInterval;
- (id)reportDataWithUserInfo:;
- (void)setPlayingEventTimeInterval:;
- (void)setShouldReportTimeSeries:;
- (BOOL)shouldReportTimeSeries;
+ (id)defaultMonitor;
@end
