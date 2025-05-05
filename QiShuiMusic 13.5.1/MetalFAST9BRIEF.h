@interface MetalFAST9BRIEF : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLCommandQueue> queue;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)textureCache;
- (id)queue;
- (id)device;
- (BOOL)didFinishInitializationWithTimeout:;
- (id)_textureFromPixelBuffer:forcedMetalPixelFormat:forcedWidthDivisior:;
- (void)_computeResponseMap_metal:inputTexture:outputTexture:garbagePixelCount:;
- (void)_suppressResponseMap_metal:unsuppressedTexture:suppressedTexture:garbagePixelCount:;
- (void)_generateHistograms_metal:suppressedTexture:tileBuffer:desiredKeypointCountsBuffer:thresholdsBuffer:histogramBuffer:thresholdRangeBuffer:keypointsAtChosenThresholdBuffer:truncatedRegionsBuffer:tileCount:maxTileHeight:;
- (void)_cumulativeSum_metal:expectedPointsBuffer:cumulativePointsBuffer:regionCountBuffer:keypointCountBuffer:regionCount:;
- (void)_listKeypointsSimple_metal:suppressedResponseMapTexture:tileBuffer:tileCountBuffer:tileCount:thresholdsBuffer:cumulativePointsBuffer:keypointLocationsBuffer:keypointResponsesBuffer:desiredKeypointsBuffer:indexBuffer:;
- (void)_listKeypoints2_metal:suppressedResponseMapTexture:tileBuffer:tileCountBuffer:tileCount:thresholdsBuffer:cumulativePointsBuffer:keypointLocationsBuffer:keypointResponsesBuffer:maxRegionHeight:;
- (void)_listKeypoints3_metal:suppressedResponseMapTexture:tileBuffer:tileCountBuffer:tileCount:thresholdsBuffer:cumulativePointsBuffer:keypointLocationsBuffer:keypointResponsesBuffer:maxRegionHeight:maxRegionWidth:;
- (void)_refineKeypoints_metal:inputImageTexture:keypointLocationsBuffer:refinedLocationsBuffer:keypointCountBuffer:keypointCount:debugIntermediatesBuffer:cumulativePointsBuffer:tileCountBuffer:;
- (void)_extractORB_metal:boxBlurredTexture:keypointLocationsBuffer:outputORBDescriptorBuffer:keypointCountBuffer:keypointCount:;
- (void)_boxBlur_metal:inputImageTexture:boxBlurredTexture:;
- (void)_ORBDescriptorsFromTextures_part1_metal:inputTexture_RGBA8Uint:inputTexture_R8Unorm:responseBuffer:cumulativeKeypointsPerRegionBuffer:intermediateBuffers:;
- (void)_ORBDescriptorsFromTextures_part2_metal:inputTexture_RGBA8Uint:inputTexture_R8Unorm:descriptorBuffer:refinedKeypointsBuffer:cumulativeKeypointsPerRegionBuffer:intermediateBuffers:keypointCount:;
- (void)ORBDescriptorsFromPixelBuffer_metal:inputBuffer:descriptorBuffer:refinedKeypointsBuffer:responseBuffer:cumulativeKeypointsPerRegionBuffer:intermediateBuffers:;
- (void)_gaussianishBlur_metal:inputTexture:outputTexture:offset:;
+ (id)_createMTLBufferFromRects:device:storageMode:maxRectWidth:maxRectHeight:;
+ (id)_createMTLBufferFromRectRegionsDesiredKeypoints:device:storageMode:maxAllowedDescriptors:;
@end
