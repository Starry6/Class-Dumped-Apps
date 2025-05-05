@interface CVAFilterRenderStagelight : NSObject
@property (nonatomic) NSString label;
- (id)label;
- (void)encodeToCommandBuffer:srcColorTex:srcAlphaTex:dstYTex:dstUVTex:stageLightProxyLut:stageLightLut:blackBackgroundIntensity:vignetteIntensity:;
- (void).cxx_destruct;
- (id)initWithDevice:library:pipelineLibrary:error:;
@end
