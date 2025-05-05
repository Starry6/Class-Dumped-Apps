@interface MPSImageConvolution : MPSUnaryImageKernel
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q kernelWidth;
@property (nonatomic) float bias;
- (void)setBias:;
- (float)bias;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)sourceRegionForDestinationSize:;
- (void)dealloc;
- (id)initWithDevice:kernelWidth:kernelHeight:weights:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)initFilterWithKernelWidth:kernelHeight:weights:;
- (unsigned long long)kernelHeight;
- (id)initWithDevice:;
- (unsigned long long)kernelWidth;
- (id)initWithDevice_private:;
+ (id)libraryInfo:;
@end
