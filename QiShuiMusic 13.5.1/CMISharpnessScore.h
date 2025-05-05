@interface CMISharpnessScore : NSObject
@property (nonatomic) FigMetalAllocator allocator;
- (void)setAllocator:;
- (void).cxx_destruct;
- (id)allocator;
- (id)initWithOptionalCommandQueue:externalMemoryResource:kernelWeights:;
- (int)calculateFromPixelBuffer:toImageScore:andFromRoi:toRoiScore:sourceComponent:;
- (id)initWithOptionalCommandQueue:kernelWeights:;
- (int)calculateFromTexture:toImageScore:andFromRoi:toRoiScore:sourceComponent:;
- (int)calculateFromRawTexture:toImageScore:andFromRoi:toRoiScore:sourceComponent:isQuadra:firstPixel:;
- (int)_calculateFromTexture:toImageScore:andFromRoi:toRoiScore:sourceComponent:binning:firstPixel:;
- (int)_computeSharpnessScore:outputTexture:sourceComponent:binning:firstPixel:;
- (int)_sumScoreForRoi:roiId:scoreTexture:output:;
- (id)computePipelineFor:sourceComponent:;
- (void)_getDefaultConvolutionWeights:;
+ (id)externalMemoryDescriptorForConfiguration:;
+ (unsigned long long)bytesRequiredForProcessingImageWith:height:;
@end
