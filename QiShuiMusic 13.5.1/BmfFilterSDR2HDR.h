@interface BmfFilterSDR2HDR : FilterBase
- (id)createPixelTextureWithFrame:format:;
- (id)getEffectPatameterStr;
- (void)updateStepAndStrength:strengths:;
- (void)dealloc;
- (id)process:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
