@interface MetalFilterSDR2HDR : MetalFilterDefault
- (void)checkColorConversion:YCbCrMatrixAttachment:;
- (id)createPixelTextureWithFrame:format:;
- (id)getFragmentShader;
- (unsigned long long)getOutputBits:;
- (long long)renderBefore:frame:;
- (id)init;
- (void).cxx_destruct;
@end
