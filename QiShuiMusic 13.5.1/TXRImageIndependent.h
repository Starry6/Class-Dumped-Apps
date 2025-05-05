@interface TXRImageIndependent : TXRImage
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q alphaInfo;
@property (nonatomic)  dimensions;
- (id)dimensions;
- (unsigned long long)pixelFormat;
- (id)initWithCGImage:bufferAllocator:options:error:;
- (void)setAlphaInfo:;
- (id)initWithImage:dimensions:pixelFormat:;
- (unsigned long long)alphaInfo;
- (id)initWithImage:dimensions:pixelFormat:alphaInfo:;
- (id)initWithDimensions:pixelFormat:alphaInfo:bytesPerRow:bytesPerImage:buffer:offset:;
- (id)initWithCGImage:pixelFormat:bufferAllocator:options:error:;
- (id)initWithDimensions:pixelFormat:alphaInfo:bufferAllocator:;
- (BOOL)exportToURL:uttype:error:;
- (id)newCGImageWithColorSpace:error:;
@end
