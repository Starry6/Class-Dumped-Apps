@interface AXMADSREnvelope : NSObject
@property (nonatomic) double attackMS;
@property (nonatomic) double attackLevel;
@property (nonatomic) double decayMS;
@property (nonatomic) double sustainMS;
@property (nonatomic) double sustainLevel;
@property (nonatomic) double releaseMS;
@property (nonatomic) double lengthMS;
- (id)init;
- (id)copy;
- (id)initWithAttackDuration:attackLevel:decayDuration:sustainDuration:sustainLevel:releaseDuration:;
- (double)lengthMS;
- (double)levelForTime:;
- (double)attackMS;
- (void)setAttackMS:;
- (double)attackLevel;
- (void)setAttackLevel:;
- (double)decayMS;
- (void)setDecayMS:;
- (double)sustainMS;
- (void)setSustainMS:;
- (double)sustainLevel;
- (void)setSustainLevel:;
- (double)releaseMS;
- (void)setReleaseMS:;
+ (id)defaultEnvelope;
@end
