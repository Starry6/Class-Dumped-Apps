@interface ARDepthEstimationTechnique : ARMLImageProcessingTechnique
@property (nonatomic) BOOL isBusy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q depthDataSource;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_fullDescription;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:;
- (void)_endMLProcessingSignpostWithTimestamp:;
- (void)_startMLRunNetworkSignpostWithTimestamp:;
- (void)_endMLRunNetworkSignpostWithTimestamp:;
- (void)_startMLCreateResultSignpostWithTimestamp:orientation:outputSize:;
- (void)_endMLCreateResultSignpostWithTimestamp:;
- (void)networkModeDidChange:toMode:;
- (long long)depthDataSource;
- (id)createResultDataFromTensors:numberOfOutputTensors:imageDataForNeuralNetwork:inputImageData:rotationNeeded:regionOfInterest:;
- (long long)numberOfInputChannelsToExpectInNetwork;
@end
