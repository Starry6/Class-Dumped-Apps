@interface ModelHyperparameters : NSObject
@property (nonatomic) NSNumber numTrees;
@property (nonatomic) NSNumber learningRate;
@property (nonatomic) NSNumber minChildWeight;
@property (nonatomic) q adaptationStrategy;
- (void).cxx_destruct;
- (id)learningRate;
- (void)setLearningRate:;
- (id)numTrees;
- (id)minChildWeight;
- (id)initWithNumTrees:learningRate:minChildWeight:adaptationStrategy:;
- (void)setNumTrees:;
- (void)setMinChildWeight:;
- (long long)adaptationStrategy;
- (void)setAdaptationStrategy:;
@end
