@interface MPSImageFindKeypoints : MPSKernel
@property (nonatomic) {?=Qf} keypointRangeInfo;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)keypointRangeInfo;
- (id)initWithDevice:info:;
- (void)encodeInternalToCommandEncoder:commandBuffer:sourceTexture:regions:numberOfRegions:keypointCountBuffer:keypointCountBufferOffset:keypointDataBuffer:keypointDataBufferOffset:rectangles:histogramBuffer:keypointInfoBuffer:rowCountersBuffer:heightCountersBuffer:maxRectangleHeight:;
- (void)encodeToCommandEncoder:commandBuffer:sourceTexture:regions:numberOfRegions:keypointCountBuffer:keypointCountBufferOffset:keypointDataBuffer:keypointDataBufferOffset:;
- (void)encodeToCommandBuffer:sourceTexture:regions:numberOfRegions:keypointCountBuffer:keypointCountBufferOffset:keypointDataBuffer:keypointDataBufferOffset:;
+ (id)libraryInfo:;
@end
