@interface MPSNNGramMatrixCalculation : MPSCNNKernel
@property (nonatomic) float alpha;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (void)setAlpha:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (float)alpha;
- (id)initWithDevice:;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:;
- (id)initWithDevice:alpha:;
+ (id)libraryInfo:;
@end
