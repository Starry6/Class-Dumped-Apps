@interface MetalFilterHDRBrightNormalize : FilterBase
- (BOOL)isUsing;
- (int)updateStrength:;
- (void)checkColorConversion:;
- (long long)checkFrameOptimizeMode:;
- (BOOL)checkHDRHLG:;
- (id)createFBOTexture:format:toSDR:;
- (BOOL)getMTLTextureFromPixelBuffer:texture2:videoBuffer:;
- (int)initKernel;
- (void)makeThreadsPerGroupSize:groupSize:;
- (int)runKernel:dst:toSDR:screenLight:;
- (int)runKernel:inUV:dst:toSDR:screenLight:;
- (id)process:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
