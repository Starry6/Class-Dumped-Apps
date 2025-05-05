@interface MLCSGDOptimizer : MLCOptimizer
@property (nonatomic) MLCOptimizerDescriptor optimizerDescriptor;
@property (nonatomic) float momentumScale;
@property (nonatomic) BOOL usesNesterovMomentum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (float)momentumScale;
- (BOOL)compileForDevice:;
- (id)initWithMomentumScale:useNesterovMomentum:optimizerDescriptor:;
- (BOOL)usesNesterovMomentum;
- (id)optimizerDescriptor;
+ (id)optimizerWithDescriptor:momentumScale:usesNesterovMomentum:;
+ (id)optimizerWithDescriptor:;
@end
