@interface SISceneSegmentation : SIModel
@property (nonatomic) NSDictionary tracingEntry;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)getOutputResolution;
- (id)tracingEntry;
- (id)initWithNetworkConfiguration:;
- (id)getInputResolution;
- (void)_initializeUncertaintyThresholds:;
- (BOOL)supportUncertainty;
- (long long)evaluateSemanticForImageData:output:;
- (long long)evaluateSemanticForImage:depthInput:semanticOutput:confidenceOutput:uncertaintyOutput:;
- (long long)postprocessingOutput:;
- (long long)postprocessingSemanticOutput:confidenceOutput:uncertaintyOutput:;
- (long long)postprocessingSemanticMultimodalOutput:confidenceOutput:;
- (long long)postprocessingIOSSemanticOutput:confidenceOutput:uncertaintyOutput:;
- (long long)postprocessingSemanticOutput:confidenceOutput:;
+ (id)tracingEntryFormat;
@end
