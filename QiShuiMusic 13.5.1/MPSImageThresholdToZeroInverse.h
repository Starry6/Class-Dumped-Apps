@interface MPSImageThresholdToZeroInverse : MPSUnaryImageKernel
@property (nonatomic) float thresholdValue;
@property (nonatomic) r^f transform;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (float)thresholdValue;
- (void)encodeWithCoder:;
- (id)transform;
- (id)initWithDevice:;
- (id)initWithDevice:thresholdValue:linearGrayColorTransform:;
+ (id)libraryInfo:;
@end
