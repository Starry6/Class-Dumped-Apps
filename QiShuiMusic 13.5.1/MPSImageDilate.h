@interface MPSImageDilate : MPSUnaryImageKernel
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q kernelWidth;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)sourceRegionForDestinationSize:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (unsigned long long)kernelHeight;
- (id)initWithDevice:;
- (unsigned long long)kernelWidth;
- (Class)maxClass;
- (BOOL)initKernelValues:;
- (id)initWithDevice:kernelWidth:kernelHeight:values:;
+ (id)libraryInfo:;
@end
