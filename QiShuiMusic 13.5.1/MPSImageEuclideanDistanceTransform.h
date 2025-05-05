@interface MPSImageEuclideanDistanceTransform : MPSUnaryImageKernel
@property (nonatomic) float searchLimitRadius;
- (id)initWithCoder:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (float)searchLimitRadius;
- (void)setSearchLimitRadius:;
+ (id)libraryInfo:;
@end
