@interface MLCAdamOptimizer : MLCOptimizer
@property (nonatomic) MLCOptimizerDescriptor optimizerDescriptor;
@property (nonatomic) Q timeStep;
@property (nonatomic) float beta1;
@property (nonatomic) float beta2;
@property (nonatomic) float epsilon;
@property (nonatomic) BOOL usesAMSGrad;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)epsilon;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setTimeStep:;
- (float)beta1;
- (float)beta2;
- (unsigned long long)timeStep;
- (BOOL)compileForDevice:;
- (id)optimizerDescriptor;
- (id)initWithDescriptor:beta1:beta2:epsilon:usesAMSGrad:timeStep:;
- (BOOL)usesAMSGrad;
+ (id)optimizerWithDescriptor:beta1:beta2:epsilon:timeStep:;
+ (id)optimizerWithDescriptor:;
+ (id)optimizerWithDescriptor:beta1:beta2:epsilon:usesAMSGrad:timeStep:;
@end
