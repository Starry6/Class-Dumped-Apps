@interface MLPLearningRateDecayHandler : NSObject
@property (nonatomic) float learningRate;
@property (nonatomic) Q decaySteps;
@property (nonatomic) float decayRate;
@property (nonatomic) BOOL stairCase;
@property (nonatomic) float decayedLearningRate;
@property (nonatomic) Q globalSteps;
@property (nonatomic) <MLPLearningRateDecayHandlerDelegate> delegate;
- (float)decayRate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (float)learningRate;
- (id)initWithLearningRate:decaySteps:decayRate:stairCase:;
- (void)updateGlobalStep;
- (unsigned long long)decaySteps;
- (BOOL)stairCase;
- (float)decayedLearningRate;
- (void)setDecayedLearningRate:;
- (unsigned long long)globalSteps;
- (void)setGlobalSteps:;
@end
