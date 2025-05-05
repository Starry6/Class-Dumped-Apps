@interface SIPeopleSegmentationAlgorithm : NSObject
- (void).cxx_destruct;
- (id)networkVersion;
- (long long)runWithInput:output:;
- (long long)runWithInput:output:networkConfiguration:;
- (id)initWithComputeEngine:andNetworkConfiguration:;
- (id)initWithComputeEngine:andNetworkConfiguration:useAppleNeuralEngineFramework:;
- (id)getOutputResolution;
- (void)setSnapEveryFrameCount:;
- (id)initWithComputeEngine:;
- (id)initWithNetworkConfiguration:;
- (id)getInputResolution;
- (long long)_switchConfiguration:;
- (id)initWithInputResolution:;
- (id)_preprocessingInputImage:;
- (long long)_inference:output:;
+ (BOOL)supportsANE;
+ (id)outputResolution;
+ (id)inputResolution;
@end
