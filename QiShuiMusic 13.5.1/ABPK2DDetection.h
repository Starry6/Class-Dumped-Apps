@interface ABPK2DDetection : NSObject
@property (nonatomic) BOOL useEspressoZeroCopyOutput;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithNetworkConfig:;
- (id)runWithMLImage:originalImage:abpkOrientation:atTimestamp:rotationOfResultTensor:;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)changeEspressoConfig:;
- (void)_bindOutputTensor;
- (BOOL)useEspressoZeroCopyOutput;
- (void)setUseEspressoZeroCopyOutput:;
- (BOOL)initMLNetwork;
- (id)createException:forNetwork:;
- (id)runWithImageDataForNeuralNetwork:originalImageData:abpkOrientation:atTimestamp:rotationOfResultTensor:;
- (id)runWithImage:abpkOrientation:atTimestamp:rotationOfResultTensor:;
- (id)_createResultDataFromImageDataForNeuralNetwork:originalImageData:outputPixelBuffer:numberOfOutputTensors:rotationOfResultTensor:;
- (void)_startEvaluateBodyPoseForImageSignpostWithTimestamp:;
- (void)_endEvaluateBodyPoseForImageSignpostWithTimestamp:;
+ (id)inputDimensionsForDeviceOrientation:;
@end
