@interface VCPImageHumanActionAnalyzer : VCPImageAnalyzer
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (int)copyImage:toData:;
- (id)initWithPHFaces:existingResults:;
- (int)aggregateWith:;
- (int)createInput:withBuffer:cnnInputHeight:cnnInputWidth:crop:;
- (id)rectFromPHFace:;
+ (id)sharedModel:outputNames:properties:;
@end
