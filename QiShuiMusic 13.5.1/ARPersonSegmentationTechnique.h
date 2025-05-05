@interface ARPersonSegmentationTechnique : ARMLImageProcessingTechnique
@property (nonatomic) BOOL shouldOperateOnHighResolutionImages;
- (id)init;
- (void)dealloc;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)requestResultDataAtTimestamp:context:;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (BOOL)shouldOperateOnHighResolutionImages;
- (void)setShouldOperateOnHighResolutionImages:;
- (void)_prepareOnce:;
- (id)runNeuralNetworkWithImageData:originalImageData:regionOfInterest:rotationOfResultTensor:;
- (BOOL)isLoadedModelVersionCorrect:;
- (BOOL)preProcessNetworkInputImage:;
@end
