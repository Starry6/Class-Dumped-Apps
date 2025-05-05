@interface CIImageProcessorInput : CIImageProcessorInOut
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} region;
@property (nonatomic) Q bytesPerRow;
@property (nonatomic) NSInteger format;
@property (nonatomic) r^v baseAddress;
@property (nonatomic) ^{__IOSurface=} surface;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) <MTLTexture> metalTexture;
@property (nonatomic) Q digest;
- (void)dealloc;
- (id)baseAddress;
- (id)initWithSurface:texture:digest:allowSRGB:bounds:context:;
- (id)metalTexture;
@end
