@interface MetalFilterRGBtoYUV : FilterBase
- (long long)render:sTexture:fboTexture:fboTexture2:inFormat:cbcrMatrixType:;
- (void)checkColorConversion:cbcrMatrixType:;
- (long long)render:sTexture:fboTexture:inFormat:cbcrMatrixType:;
- (id)init;
- (id)process:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
