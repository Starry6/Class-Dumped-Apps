@interface MPSImageHistogramEqualization : MPSUnaryImageKernel
@property (nonatomic) {?=QB} histogramInfo;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initWithDevice:histogramInfo:;
- (void)encodeTransformToCommandBuffer:sourceTexture:histogram:histogramOffset:;
- (id)histogramInfo;
+ (id)libraryInfo:;
@end
