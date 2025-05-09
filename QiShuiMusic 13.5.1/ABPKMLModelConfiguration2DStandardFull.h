@interface ABPKMLModelConfiguration2DStandardFull : ABPKMLModelConfiguration2D
- (id)init;
- (void).cxx_destruct;
- (float)scale;
- (id)inputDimensions;
- (id)inputTensorNames;
- (id)outputTensorNames;
- (id)compiledMLModelPath;
- (id)inputDimensionsForDeviceOrientation:;
- (id)configStringForDeviceOrientation:;
- (id)inputDimensionsForABPKDeviceOrientation:;
- (id)configStringForABPKDeviceOrientation:;
- (float)biasR;
- (float)biasG;
- (float)biasB;
- (BOOL)networkWantsBGR;
- (BOOL)applyPreProcessing;
- (unsigned int)heatMapChannels;
- (unsigned int)affinityMapChannels;
- (BOOL)networkEstimatesAffinityMaps;
@end
