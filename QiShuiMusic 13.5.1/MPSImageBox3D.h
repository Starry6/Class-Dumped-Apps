@interface MPSImageBox3D : MPSUnaryImageKernel
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q kernelDepth;
- (id)initWithCoder:device:;
- (void)dealloc;
- (unsigned long long)kernelHeight;
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:;
- (unsigned long long)kernelWidth;
- (id)initWithDevice:kernelWidth:kernelHeight:kernelDepth:;
- (unsigned long long)kernelDepth;
+ (id)libraryInfo:;
+ (id)supportedPixelFormats;
@end
