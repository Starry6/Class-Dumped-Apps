@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState
@property (nonatomic) MPSCNNConvolutionGradientState convolutionGradientState;
@property (nonatomic) MPSCNNConvolutionTranspose convolutionTranspose;
- (void)dealloc;
- (id)destinationImageDescriptorForSourceImages:sourceStates:forKernel:suggestedDescriptor:;
- (id)debugDescription;
- (id)initWithResource:;
- (id)convolutionTranspose;
- (unsigned long long)sourceWidth;
- (unsigned long long)sourceHeight;
- (id)initWithResource:weightsLayout:;
- (id)initWithDevice:resourceList:convolution:weightsLayout:;
- (id)convolution;
- (id)initWithDevice:resourceList:convolution:;
- (id)initWithDevice:resourceList:convolutionTranspose:convolutionGradientState:;
- (id)initWithDevice:resourceList:convolutionTranspose:convolutionGradientState:weightsLayout:;
- (id)convolutionGradientState;
+ (id)temporaryStateWithCommandBuffer:resourceList:convolutionTranspose:convolutionGradientState:weightsLayout:;
+ (id)temporaryStateWithCommandBuffer:resourceList:convolutionTranspose:convolutionGradientState:;
@end
