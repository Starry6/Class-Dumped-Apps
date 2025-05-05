@interface CVAFilterHybridResampling : ImageSaverRegistrator
@property (nonatomic) NSString label;
@property (nonatomic) MPSImageLanczosScale scaler;
- (void)encodeHybridDownsamplingToCommandBuffer:source:destination:;
- (void)encodeBilinearScalingToCommandBuffer:source:destination:mode:;
- (id)label;
- (id)initWithDevice:library:pipelineLibrary:commandQueue:error:;
- (void).cxx_destruct;
- (id)scaler;
+ (void)prewarmScaler:device:commandBuffer:;
@end
