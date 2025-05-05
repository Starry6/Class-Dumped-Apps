@interface AR2DSkeletonDetectionTechnique : ARMLImageProcessingTechnique
@property (nonatomic) BOOL isBusy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (double)requiredTimeInterval;
- (void)_prepareOnce:;
- (id)processImageDataThroughNeuralNetwork:originalImageData:regionOfInterest:rotationOfResultTensor:;
- (id)runNeuralNetworkWithImageData:originalImageData:regionOfInterest:rotationOfResultTensor:;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:;
- (void)_endMLProcessingSignpostWithTimestamp:;
- (void)_startMLRunNetworkSignpostWithTimestamp:;
- (void)_endMLRunNetworkSignpostWithTimestamp:;
- (void)_startMLCreateResultSignpostWithTimestamp:orientation:outputSize:;
- (void)_endMLCreateResultSignpostWithTimestamp:;
+ (id)inputDimensionsForMLModel;
@end
