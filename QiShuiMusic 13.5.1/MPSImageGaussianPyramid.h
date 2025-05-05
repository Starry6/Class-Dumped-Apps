@interface MPSImageGaussianPyramid : MPSImagePyramid
- (id)initWithCoder:device:;
- (void)setOffset:;
- (id)sourceRegionForDestinationSize:;
- (id)initWithDevice:kernelWidth:kernelHeight:weights:;
- (void)setClipRect:;
+ (id)libraryInfo:;
@end
