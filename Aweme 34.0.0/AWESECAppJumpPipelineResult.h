@interface AWESECAppJumpPipelineResult : AWESECAppJumpBasicCheckResult
@property (nonatomic) AWESECAppJumpAllowListCheckResult allowListCheckResult;
@property (nonatomic) AWESECAppJumpAllowListCheckResult precisionCheckResult;
@property (nonatomic) AWESECAppJumpProbeCheckResult probeCheckResult;
@property (nonatomic) AWESECAppJumpUncaughtCheckResult uncaughtCheckResult;
@property (nonatomic) AWESECAppJumpRulerResult rulerResult;
- (id)allowListCheckResult;
- (id)rulerResult;
- (id)precisionCheckResult;
- (id)probeCheckResult;
- (id)uncaughtCheckResult;
- (void)updateRiskLevelWithResult:;
- (void)setAllowListCheckResult:;
- (void)setPrecisionCheckResult:;
- (void)setProbeCheckResult:;
- (void)setUncaughtCheckResult:;
- (void)setRulerResult:;
- (void).cxx_destruct;
@end
