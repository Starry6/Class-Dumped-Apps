@interface MPSImageHistogram : MPSKernel
@property (nonatomic) {?={?=QQQ}{?=QQQ}} clipRectSource;
@property (nonatomic) BOOL zeroHistogram;
@property (nonatomic)  minPixelThresholdValue;
@property (nonatomic) {?=QB} histogramInfo;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setClipRectSource:;
- (void)encodeToCommandBuffer:sourceTexture:histogram:histogramOffset:;
- (id)initWithDevice:histogramInfo:;
- (unsigned long long)histogramSizeForSourceFormat:;
- (id)clipRectSource;
- (id)histogramInfo;
- (void)encodeInternalToCommandEncoder:commandBuffer:sourceTextures:histogram:histogramOffset:kernelDAGObject:inputExtent:srcStyle:;
- (void)encodeToCommandEncoder:commandBuffer:sources:histogram:histogramOffset:kernelDAGObject:;
- (void)encodeToCommandEncoder:commandBuffer:sourceTexture:histogram:histogramOffset:;
- (void)encodeToCommandBuffer:sources:histogram:histogramOffset:kernelDAGObject:;
- (void)useGlobalAtomics;
- (void)useThreadgroupAtomics;
- (BOOL)zeroHistogram;
- (void)setZeroHistogram:;
- (id)minPixelThresholdValue;
- (void)setMinPixelThresholdValue:;
+ (id)libraryInfo:;
@end
