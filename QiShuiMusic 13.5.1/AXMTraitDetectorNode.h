@interface AXMTraitDetectorNode : AXMEvaluationNode
@property (nonatomic) q sampleFrequency;
@property (nonatomic) BOOL shouldEvaluateColorInformation;
@property (nonatomic) double colorDistanceTheshold;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
- (BOOL)requiresVisionFramework;
- (id)_brightnessValueForVisionObservation:;
- (id)_blurValueForVisionObservation:;
- (void)_evaluateColorInformation:;
- (long long)sampleFrequency;
- (void)setSampleFrequency:;
- (BOOL)shouldEvaluateColorInformation;
- (void)setShouldEvaluateColorInformation:;
- (double)colorDistanceTheshold;
- (void)setColorDistanceTheshold:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
