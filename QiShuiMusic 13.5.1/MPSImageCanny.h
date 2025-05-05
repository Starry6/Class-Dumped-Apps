@interface MPSImageCanny : MPSUnaryImageKernel
@property (nonatomic) float maxEdgeTracingIterations;
@property (nonatomic) r^f colorTransform;
@property (nonatomic) float sigma;
@property (nonatomic) float highThreshold;
@property (nonatomic) float lowThreshold;
@property (nonatomic) BOOL useFastMode;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (float)sigma;
- (id)initWithDevice:;
- (id)colorTransform;
- (id)initWithDevice:linearToGrayScaleTransform:sigma:;
- (float)lowThreshold;
- (void)setLowThreshold:;
- (float)highThreshold;
- (void)setHighThreshold:;
- (BOOL)useFastMode;
- (void)setUseFastMode:;
- (float)maxEdgeTracingIterations;
- (void)setMaxEdgeTracingIterations:;
+ (id)libraryInfo:;
@end
