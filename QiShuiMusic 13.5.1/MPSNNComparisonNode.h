@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode
@property (nonatomic) Q comparisonType;
- (unsigned long long)comparisonType;
- (void)setComparisonType:;
- (id)newFilterNode;
- (Class)gradientClass;
@end
