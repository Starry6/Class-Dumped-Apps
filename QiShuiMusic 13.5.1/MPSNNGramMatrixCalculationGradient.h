@interface MPSNNGramMatrixCalculationGradient : MPSCNNGradientKernel
@property (nonatomic) float alpha;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)setAlpha:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (float)alpha;
- (id)initWithDevice:;
- (id)initWithDevice:alpha:;
+ (id)libraryInfo:;
@end
