@interface ARSIPersonDetectionTechnique : ARMLImageProcessingTechnique
@property (nonatomic) ARPersonDetectionData latestResult;
@property (nonatomic) BOOL isBusy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)_prepareOnce:;
- (id)runNeuralNetworkWithImageData:originalImageData:regionOfInterest:rotationOfResultTensor:;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:;
- (void)_endMLProcessingSignpostWithTimestamp:;
- (void)_startMLRunNetworkSignpostWithTimestamp:;
- (void)_endMLRunNetworkSignpostWithTimestamp:;
- (void)_startMLCreateResultSignpostWithTimestamp:orientation:outputSize:;
- (void)_endMLCreateResultSignpostWithTimestamp:;
- (void)changeEspressoConfig:;
- (BOOL)isLoadedModelVersionCorrect:;
- (id)createResultDataFromAlgorithmOutput:imageDataForNeuralNetwork:inputImageData:rotationNeeded:regionOfInterest:;
- (id)latestResult;
- (void)setLatestResult:;
@end
