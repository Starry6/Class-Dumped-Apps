@interface VEPixelBufferCopyUtils : NSObject
@property (nonatomic) ^{__CVPixelBufferPool=} pixelBufferPool;
@property (nonatomic) NSInteger pixelBufferPoolWidth;
@property (nonatomic) NSInteger pixelBufferPoolHeight;
@property (nonatomic) I pixelFormat;
- (id)buffer_attributes_create:height:pix_fmt:;
- (id)copyAndRetainYUV420vPixelBuffer:;
- (id)copyBGRAPixelBuffer:;
- (id)copyPixelBuffer:;
- (id)genPixelbufferWithCGImage:;
- (int)pixelBufferPoolHeight;
- (int)pixelBufferPoolWidth;
- (void)setPixelBufferPoolHeight:;
- (void)setPixelBufferPoolWidth:;
- (id)init;
- (void)dealloc;
- (void)setPixelFormat:;
- (id)pixelBufferPool;
- (unsigned int)pixelFormat;
- (void)setPixelBufferPool:;
@end
