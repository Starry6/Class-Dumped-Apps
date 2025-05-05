@interface MPSCNNDropoutNode : MPSNNFilterNode
@property (nonatomic) float keepProbability;
@property (nonatomic) Q seed;
@property (nonatomic) {?=QQQ} maskStrideInPixels;
- (unsigned long long)seed;
- (id)initWithSource:;
- (id)newFilterNode;
- (Class)gradientClass;
- (float)keepProbability;
- (id)maskStrideInPixels;
- (id)initWithSource:keepProbability:;
- (id)initWithSource:keepProbability:seed:maskStrideInPixels:;
+ (id)nodeWithSource:;
+ (id)nodeWithSource:keepProbability:;
+ (id)nodeWithSource:keepProbability:seed:maskStrideInPixels:;
@end
