@interface MNVehicleMonitor : NSObject
@property (nonatomic) <MNVehicleMonitorDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)startMonitoring;
- (id)delegate;
- (void).cxx_destruct;
- (void)stopMonitoring;
@end
