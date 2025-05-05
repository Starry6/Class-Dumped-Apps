@interface MPSImageBox : MPSUnaryImageKernel
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q kernelWidth;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)sourceRegionForDestinationSize:;
- (void)dealloc;
- (id)debugDescription;
- (void)initFilterInfo;
- (id)initWithDevice:kernelWidth:kernelHeight:;
- (void)encodeWithCoder:;
- (unsigned long long)kernelHeight;
- (id)initWithDevice:;
- (unsigned long long)kernelWidth;
+ (id)libraryInfo:;
@end
