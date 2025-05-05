@interface CVAFilterColorAlphaToFgBg : NSObject
@property (nonatomic) NSString label;
- (void)encodeToCommandBuffer:srcColorTex:srcAlphaTex:dstForegroundTex:dstBackgroundTex:;
- (id)label;
- (void)encodeToCommandBuffer:srcColorTex:srcAlphaTex:dstForegroundTex:;
- (void).cxx_destruct;
- (id)initWithDevice:library:pipelineLibrary:error:;
@end
