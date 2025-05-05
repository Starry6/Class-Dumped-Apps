@interface MPSImageScale : MPSUnaryImageKernel
@property (nonatomic) r^{MPSScaleTransform=dddd} scaleTransform;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setScaleTransform:;
- (id)scaleTransform;
@end
