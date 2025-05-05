@interface MPSImageThresholdBinary : MPSUnaryImageKernel
@property (nonatomic) float thresholdValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) r^f transform;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:thresholdValue:maximumValue:linearGrayColorTransform:;
- (float)maximumValue;
- (id)debugDescription;
- (float)thresholdValue;
- (void)encodeWithCoder:;
- (id)transform;
- (id)initWithDevice:;
+ (id)libraryInfo:;
@end
