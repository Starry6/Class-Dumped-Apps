@interface GPUSynthesis : FRCMetalBase
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (id)initWithDevice:commmandQueue:;
- (void)encodeCombineCmdToCommandBuffer:fromBuffer0:buffer1:best0:best1:map:normalized0:normalized1:alpha:flowStats0:flowStats1:toTexture:;
- (void)encodeAlphaCmdToCommandBuffer:fromBuffer0:buffer1:toAlpha:timeScale:toNormalized0:toNormalized1:;
- (void)encodePostSmoothFilterCmdToCommandBuffer:map:fromTexture:toTexture:;
- (void)encodeAverageErrorCmdToCommandBuffer:minErrorMap0:minErrorMap1:avgErrorMap0:avgErrorMap1:width:height:;
@end
