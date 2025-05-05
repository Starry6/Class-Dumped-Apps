@interface WBSUnifiedBarAnalyticsRecorder : NSObject
@property (nonatomic) <WBSUnifiedBarAnalyticsRecorderDelegate> delegate;
- (void)schedulePeriodicReport;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_reportAnalytics;
@end
