@interface MPSImageNormalizedHistogram : MPSKernel
@property (nonatomic) {?={?=QQQ}{?=QQQ}} clipRectSource;
@property (nonatomic) BOOL zeroHistogram;
@property (nonatomic) {?=QB} histogramInfo;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setClipRectSource:;
- (id)initWithDevice:histogramInfo:;
- (unsigned long long)histogramSizeForSourceFormat:;
- (id)clipRectSource;
- (id)histogramInfo;
- (BOOL)zeroHistogram;
- (void)setZeroHistogram:;
- (void)encodeInternalToCommandEncoder:commandBuffer:sourceTexture:minmaxTexture:histogram:histogramOffset:inputExtent:srcStyle:;
- (void)encodeToCommandEncoder:commandBuffer:sourceTexture:minmaxTexture:histogram:histogramOffset:;
- (void)encodeToCommandBuffer:sourceTexture:minmaxTexture:histogram:histogramOffset:;
+ (id)libraryInfo:;
@end
