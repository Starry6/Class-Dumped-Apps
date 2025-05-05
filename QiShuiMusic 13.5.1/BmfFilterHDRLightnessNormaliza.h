@interface BmfFilterHDRLightnessNormaliza : FilterBase
@property (nonatomic) <IBmfHdrBn> bmfHdrBn;
@property (nonatomic) NSObject<OS_dispatch_queue> bmfInitprocessorQueue;
@property (nonatomic) NSDictionary parameter;
@property (nonatomic) BOOL downloadSuccess;
- (id)NSArrayTransforCFloatArray:;
- (BOOL)downloadSuccess;
- (id)bmfHdrBn;
- (id)bmfInitprocessorQueue;
- (void)checkDownloadAndInitBmf;
- (void)copyConversionToBnConversion:dstBnConversion:;
- (id)createPixelTextureWithFrame:format:forceSDR:;
- (id)getEffectPatameterStr;
- (void)getHDRBnConversionMatrix:inFrameFmt:inYCbCrMatrixType:;
- (BOOL)getMTLTextureFromPixelBuffer:texture2:videoBuffer:;
- (void)initBmfBnWithParam:modelPath:;
- (void)setBmfHdrBn:;
- (void)setBmfInitprocessorQueue:;
- (void)setDownloadSuccess:;
- (BOOL)supportBmfHDRLightnessNormaliza:;
- (id)process:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)parameter;
- (void)setParameter:;
@end
