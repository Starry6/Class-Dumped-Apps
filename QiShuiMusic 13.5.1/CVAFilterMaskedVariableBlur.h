@interface CVAFilterMaskedVariableBlur : NSObject
@property (nonatomic) NSString label;
- (void)encodeToCommandBuffer:source:destination:mask:maxBlurRadius:;
- (id)label;
- (id)initWithDevice:library:pipelineLibrary:commandQueue:kernelSize:error:;
- (void).cxx_destruct;
- (void)encodeBlurPyramidInPlaceToCommandBuffer:inoutTexture:;
+ (void)prewarmGaussianPyramid:device:commandBuffer:;
@end
