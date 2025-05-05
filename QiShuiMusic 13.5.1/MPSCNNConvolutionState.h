@interface MPSCNNConvolutionState : MPSState
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) {?=qqq} sourceOffset;
@property (nonatomic) Q sourceWidth;
@property (nonatomic) Q sourceHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)destinationImageDescriptorForSourceImages:sourceStates:forKernel:suggestedDescriptor:;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (unsigned long long)sourceWidth;
- (unsigned long long)sourceHeight;
- (id)sourceOffset;
- (id)initWithSourceWidth:sourceHeight:kernelWidth:kernelHeight:sourceOffset:;
@end
