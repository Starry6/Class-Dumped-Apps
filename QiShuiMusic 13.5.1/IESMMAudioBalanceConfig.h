@interface IESMMAudioBalanceConfig : IESMMAudioEffectConfig
@property (nonatomic) float averageLoudness;
@property (nonatomic) float peakLoudness;
@property (nonatomic) float targetLoudness;
- (float)averageLoudness;
- (float)peakLoudness;
- (void)setAverageLoudness:;
- (void)setPeakLoudness:;
- (void)setTargetLoudness:;
- (void)setupDefaultValues;
- (float)targetLoudness;
- (id)toDicInfo;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
