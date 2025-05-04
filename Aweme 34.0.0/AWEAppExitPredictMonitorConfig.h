@interface AWEAppExitPredictMonitorConfig : NSObject
@property (nonatomic) BOOL enable_monitor;
@property (nonatomic) double enable_monitor_run_rate;
@property (nonatomic) q real_next_count;
- (BOOL)enable_monitor;
- (void)setEnable_monitor:;
- (double)enable_monitor_run_rate;
- (void)setEnable_monitor_run_rate:;
- (long long)real_next_count;
- (void)setReal_next_count:;
- (id)initWithDict:;
@end
