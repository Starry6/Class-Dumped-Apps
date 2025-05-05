@interface MPSNDArrayResample : MPSNDArrayUnaryKernel
@property (nonatomic) r^{MPSScaleTransform=dddd} scaleTransform;
@property (nonatomic) I resampleMode;
@property (nonatomic) I dataFormat;
@property (nonatomic) I nearestMode;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setResampleMode:;
- (void)setScaleTransform:;
- (void)setNearestMode:;
- (void)setDataFormat:;
- (id)scaleTransform;
- (unsigned int)dataFormat;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (unsigned int)resampleMode;
- (unsigned int)nearestMode;
+ (id)libraryInfo:;
@end
