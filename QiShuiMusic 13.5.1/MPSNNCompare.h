@interface MPSNNCompare : MPSCNNArithmetic
@property (nonatomic) Q comparisonType;
@property (nonatomic) float threshold;
- (float)threshold;
- (unsigned long long)comparisonType;
- (void)setComparisonType:;
- (id)initWithDevice:;
- (void)setThreshold:;
@end
