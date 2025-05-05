@interface ARProcessMonitor : NSObject
@property (nonatomic) <ARProcessMonitorStateChangeDelegate> delegate;
- (id)init;
- (void)handleStateUpdate:;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)startMonitoringPID:;
- (void)stopMonitoringPID:;
- (void)updateProcessMonitorConfig:withPredicates:;
+ (BOOL)processIsDaemon:error:;
@end
