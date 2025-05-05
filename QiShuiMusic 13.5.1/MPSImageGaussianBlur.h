@interface MPSImageGaussianBlur : MPSUnaryImageKernel
@property (nonatomic) float sigma;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)sourceRegionForDestinationSize:;
- (void)dealloc;
- (void)toggleCheesyBlur;
- (id)debugDescription;
- (void)initFilterInfo;
- (void)encodeWithCoder:;
- (float)sigma;
- (id)initWithDevice:sigma:;
- (id)initWithDevice:;
+ (id)libraryInfo:;
@end
