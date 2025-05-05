@interface CVAFilterRenderComposite : NSObject
@property (nonatomic) NSString label;
- (void)encodeToCommandBuffer:srcForegroundTex:srcBackgroundTex:srcCocTex:dstYTex:dstUVTex:fgColorLut:bgColorLut:frameNumber:seedGeneratorFactor:noiseBits:noiseBitsFactor:cubeIntensity:maxBlurRadius:;
- (void)encodeColorCubesToCommandBuffer:sdofYTexture:sdofUVTexture:alphaTexture:fgColorLut:bgColorLut:dstColorTex:dstColorTex_plane1:;
- (id)label;
- (void).cxx_destruct;
- (id)initWithDevice:library:pipelineLibrary:error:;
@end
