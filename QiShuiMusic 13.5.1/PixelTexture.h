@interface PixelTexture : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) <MTLTexture> texture1;
@property (nonatomic) <MTLTexture> texture2;
@property (nonatomic) <MTLTexture> texture3;
- (id)initWithPixelBuffer:firstTex:secTex:thirdTex:;
- (void)setTexture2:;
- (void)setTexture3:;
- (void)setTextureWithPlane:texture:;
- (id)texture2;
- (id)texture3;
- (void)dealloc;
- (id)pixelBuffer;
- (void).cxx_destruct;
- (void)setPixelBuffer:;
- (id)texture1;
- (void)setTexture1:;
@end
