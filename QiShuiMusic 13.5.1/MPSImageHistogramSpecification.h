@interface MPSImageHistogramSpecification : MPSUnaryImageKernel
@property (nonatomic) {?=QB} histogramInfo;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initWithDevice:histogramInfo:;
- (id)histogramInfo;
- (void)encodeTransformToCommandBuffer:sourceTexture:sourceHistogram:sourceHistogramOffset:desiredHistogram:desiredHistogramOffset:;
+ (id)libraryInfo:;
@end
