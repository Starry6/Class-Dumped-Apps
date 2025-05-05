@interface MPSCNNPoolingAverageGradient : MPSCNNPoolingGradient
@property (nonatomic) Q zeroPadSizeX;
@property (nonatomic) Q zeroPadSizeY;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (unsigned long long)zeroPadSizeY;
- (unsigned long long)zeroPadSizeX;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)setZeroPadSizeY:;
- (void)setZeroPadSizeX:;
@end
