@interface CIColorKernel : CIKernel
@property (nonatomic) BOOL perservesAlpha;
- (id)applyWithExtent:roiCallback:arguments:;
- (id)_initWithReflection:constants:constantTypes:;
- (void)setPerservesAlpha:;
- (void)setPreservesRange:;
- (id)applyWithExtent:arguments:;
- (BOOL)perservesAlpha;
- (id)applyWithExtent:arguments:options:;
- (BOOL)preservesRange;
- (id)applyWithExtent:roiCallback:arguments:options:;
- (void)setCanReduceOutputChannels:;
- (id)initWithString:;
- (BOOL)canReduceOutputChannels;
+ (id)kernelWithString:;
+ (id)SDOFV2MetalKernelNamed:;
+ (id)SDOFV3MetalKernelNamed:;
@end
