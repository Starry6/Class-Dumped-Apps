@interface MLCRMSPropOptimizer : MLCOptimizer
@property (nonatomic) MLCOptimizerDescriptor optimizerDescriptor;
@property (nonatomic) float momentumScale;
@property (nonatomic) float alpha;
@property (nonatomic) float epsilon;
@property (nonatomic) BOOL isCentered;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)epsilon;
- (float)alpha;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isCentered;
- (float)momentumScale;
- (BOOL)compileForDevice:;
- (id)optimizerDescriptor;
- (id)initWithDescriptor:momentumScale:alpha:epsilon:centered:;
+ (id)optimizerWithDescriptor:;
+ (id)optimizerWithDescriptor:momentumScale:alpha:epsilon:isCentered:;
@end
