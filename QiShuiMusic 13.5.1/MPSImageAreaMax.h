@interface MPSImageAreaMax : MPSUnaryImageKernel
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q kernelWidth;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)sourceRegionForDestinationSize:;
- (id)debugDescription;
- (id)initWithDevice:kernelWidth:kernelHeight:;
- (void)encodeWithCoder:;
- (unsigned long long)kernelHeight;
- (id)initWithDevice:;
- (void)initEncoder;
- (unsigned long long)kernelWidth;
+ (id)libraryInfo:;
@end
