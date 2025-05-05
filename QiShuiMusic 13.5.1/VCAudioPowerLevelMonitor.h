@interface VCAudioPowerLevelMonitor : NSObject
@property (nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void)detectRemoteAveragePowerLevel:timestamp:;
@end
