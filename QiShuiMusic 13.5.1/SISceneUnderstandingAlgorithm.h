@interface SISceneUnderstandingAlgorithm : NSObject
- (void).cxx_destruct;
- (void)runWithInput:output:confidenceOutput:normalsOutput:orientation:;
- (id)initWithInputResolution:andComputeEngine:;
- (id)initWithInputResolution:;
- (void)runWithInput:output:confidenceOutput:normalsOutput:;
+ (id)outputResolution;
@end
