@interface PFSlowMotionRampConfiguration : NSObject
@property (nonatomic) double rampTime;
@property (nonatomic) double introTime;
@property (nonatomic) double outroTime;
@property (nonatomic) double volumeSuppressionIntroTime;
@property (nonatomic) double volumeSuppressionOutroTime;
@property (nonatomic) Q playbackNumIntermediateSteps;
@property (nonatomic) Q exportNumIntermediateSteps;
@property (nonatomic) float playbackRampCurveExponent;
@property (nonatomic) float exportRampCurveExponent;
- (id)init;
- (id)initForRampDown:;
- (void)computeRampToTargetRate:forExport:outTimeSteps:outIntermediateRates:;
- (double)rampTime;
- (double)introTime;
- (double)outroTime;
- (double)volumeSuppressionIntroTime;
- (double)volumeSuppressionOutroTime;
- (unsigned long long)playbackNumIntermediateSteps;
- (unsigned long long)exportNumIntermediateSteps;
- (float)playbackRampCurveExponent;
- (float)exportRampCurveExponent;
@end
