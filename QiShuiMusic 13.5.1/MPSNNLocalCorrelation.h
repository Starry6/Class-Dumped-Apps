@interface MPSNNLocalCorrelation : MPSNNReduceBinary
@property (nonatomic) Q windowInX;
@property (nonatomic) Q windowInY;
@property (nonatomic) Q strideInX;
@property (nonatomic) Q strideInY;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)strideInX;
- (void)setStrideInX:;
- (unsigned long long)strideInY;
- (void)setStrideInY:;
- (id)initWithDevice:windowInX:windowInY:strideInX:strideInY:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:primaryOffset:secondaryOffset:kernelOffset:;
- (unsigned long long)windowInX;
- (void)setWindowInX:;
- (unsigned long long)windowInY;
- (void)setWindowInY:;
@end
