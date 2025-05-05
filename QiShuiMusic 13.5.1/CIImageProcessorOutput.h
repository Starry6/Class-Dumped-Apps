@interface CIImageProcessorOutput : CIImageProcessorInOut
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} region;
@property (nonatomic) Q bytesPerRow;
@property (nonatomic) NSInteger format;
@property (nonatomic) ^v baseAddress;
@property (nonatomic) ^{__IOSurface=} surface;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) <MTLTexture> metalTexture;
@property (nonatomic) <MTLCommandBuffer> metalCommandBuffer;
@property (nonatomic) Q digest;
- (void)dealloc;
- (unsigned int)contextID;
- (id)metalContext;
- (id)metalCommandBuffer;
- (id)baseAddress;
- (id)workingColorSpace;
- (id)initWithSurface:texture:digest:allowSRGB:bounds:context:;
- (id)metalTexture;
- (BOOL)metalCommandBufferRequested;
@end
