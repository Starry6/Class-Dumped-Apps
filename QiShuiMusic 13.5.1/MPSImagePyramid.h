@interface MPSImagePyramid : MPSUnaryImageKernel
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q kernelWidth;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)initWithDevice:kernelWidth:kernelHeight:weights:;
- (void)encodeWithCoder:;
- (unsigned long long)kernelHeight;
- (id)initWithDevice:;
- (unsigned long long)kernelWidth;
- (id)initWithDevice:centerWeight:;
@end
