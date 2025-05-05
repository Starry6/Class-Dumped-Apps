@interface AVCTestMonitor : NSObject
- (id)initWithDelegate:queue:;
- (void)dealloc;
- (id)delegate;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)delegateNotificationQueue;
- (void)setupNotificationQueue:;
- (void)requestSessionMediaDaemonStatsReport;
- (void)updateAudioInjectConfig:;
- (void)forceNetworkCellular:;
- (void)setEnableLoopbackInterface:;
- (void)setEnableOneToOneMode:;
- (void)setEmulatedRxPLR:;
- (void)setForcedTargetBitrate:;
- (void)setForcedCapBitrate:;
- (void)setEmulatedNetworkConfigurationPath:;
- (void)setEnableAudioPowerSpectrumReport:;
@end
