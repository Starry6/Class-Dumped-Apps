@interface VCRateControlAlgorithmSparseNOWRD : VCRateControlAlgorithmBase
@property (nonatomic) BOOL basebandAdaptationEnabled;
- (id)init;
- (BOOL)doRateControlWithStatistics:;
- (BOOL)doRateControlWithBasebandStatistics:;
- (int)rampUpTier;
- (int)rampDownTier;
- (BOOL)shouldRampDown;
- (BOOL)shouldRampUp;
- (void)configure:restartRequired:;
- (BOOL)doRateControlWithVCRCStatistics:;
- (BOOL)noServerStatsActivityDetected;
- (void)checkCongestionStatus;
- (BOOL)shouldBlockRampUpDueToNetworkUnstable;
- (BOOL)shouldBlockRampUpDueToRecentLossEvent;
- (BOOL)shouldRampDownDueToBaseband;
- (BOOL)shouldUnblockRampUpAfterTimeOut;
- (BOOL)shouldRampUpDueToBaseband;
- (int)rampDownTierDueToBaseband;
- (void)updateLastEmergencyBasebandRampDownTimeWithTierIndex:;
- (void)checkActualBitrates;
- (void)checkTargetBitrateOscillation;
- (BOOL)updateRecentTierWindow;
- (int)countDeviationChangeInTierWindow;
- (void)resetOscillationDetection;
- (void)resetRampingStatus;
- (void)printRateControlInfoToLogDump;
- (BOOL)basebandAdaptationEnabled;
@end
