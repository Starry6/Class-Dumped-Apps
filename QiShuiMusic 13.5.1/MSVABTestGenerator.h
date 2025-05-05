@interface MSVABTestGenerator : NSObject
@property (nonatomic) float probabilityForOutcomeA;
@property (nonatomic) q totalExperiments;
@property (nonatomic) q totalForOutcomeA;
@property (nonatomic) q totalForOutcomeB;
- (id)description;
- (id)initWithProbabilityForOutcomeA:;
- (void)updateProbabilityForOutcomeA:;
- (long long)nextOutcome;
- (float)probabilityForOutcomeA;
- (long long)totalExperiments;
- (long long)totalForOutcomeA;
- (long long)totalForOutcomeB;
@end
