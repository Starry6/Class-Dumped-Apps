@interface CVAFilterBox : NSObject
@property (nonatomic) NSString label;
- (void)encodeBoxVerticalToCommandBuffer:configBuffer:source:destination:normalize:;
- (id)label;
- (id)initWithDevice:library:pipelineLibrary:textureSize:error:;
- (void).cxx_destruct;
- (void)encodeBoxHorizontalToCommandBuffer:configBuffer:source:destination:;
- (void)encodeToCommandBuffer:inTexture:outTexture:radius:normalize:;
@end
