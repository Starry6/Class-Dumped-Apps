@interface CIWarpKernel : CIKernel
@property (nonatomic) BOOL perservesAlpha;
@property (nonatomic) BOOL preservesRange;
- (id)applyWithExtent:roiCallback:arguments:;
- (id)_initWithReflection:constants:constantTypes:;
- (void)setPerservesAlpha:;
- (void)setPreservesRange:;
- (BOOL)perservesAlpha;
- (id)generateMainFromWarpKernel:args:;
- (BOOL)preservesRange;
- (id)applyWithExtent:roiCallback:arguments:options:;
- (void)setCanReduceOutputChannels:;
- (id)initWithString:;
- (id)applyWithExtent:roiCallback:inputImage:arguments:options:;
- (id)makeGridImage:nx:ny:;
- (id)applyWithExtent:roiCallback:inputImage:arguments:;
- (BOOL)canReduceOutputChannels;
- (id)autogenerateROI:args:arguments:extent:;
- (id)generateGeneralKernelFromWarpKernel:args:;
+ (id)kernelWithString:;
@end
