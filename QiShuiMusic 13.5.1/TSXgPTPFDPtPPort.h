@interface TSXgPTPFDPtPPort : TSXgPTPNetworkPort
@property (nonatomic) TSXgPTPPortStatistics statistics;
@property (nonatomic) c localPDelayLogMeanInterval;
@property (nonatomic) c remotePDelayLogMeanInterval;
@property (nonatomic) BOOL multipleRemotes;
@property (nonatomic) BOOL measuringPDelay;
- (void).cxx_destruct;
- (void)setStatistics:;
- (id)statistics;
- (void)_updateFromProperties:;
- (char)localPDelayLogMeanInterval;
- (void)setLocalPDelayLogMeanInterval:;
- (char)remotePDelayLogMeanInterval;
- (void)setRemotePDelayLogMeanInterval:;
- (BOOL)multipleRemotes;
- (void)setMultipleRemotes:;
- (BOOL)measuringPDelay;
- (void)setMeasuringPDelay:;
@end
