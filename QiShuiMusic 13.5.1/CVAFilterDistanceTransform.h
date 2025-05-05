@interface CVAFilterDistanceTransform : NSObject
@property (nonatomic) NSString label;
- (id)label;
- (id)initWithDevice:library:pipelineLibrary:textureSize:error:;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:;
@end
