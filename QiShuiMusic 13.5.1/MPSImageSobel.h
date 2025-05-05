@interface MPSImageSobel : MPSUnaryImageKernel
@property (nonatomic) r^f colorTransform;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)sourceRegionForDestinationSize:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)colorTransform;
- (id)initWithDevice:linearGrayColorTransform:;
+ (id)libraryInfo:;
@end
