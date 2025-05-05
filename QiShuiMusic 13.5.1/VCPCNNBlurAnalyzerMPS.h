@interface VCPCNNBlurAnalyzerMPS : VCPCNNBlurAnalyzer
- (id)init;
- (void).cxx_destruct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)prepareModelForSourceWidth:andSourceHeight:;
- (int)computeSharpnessScore:textureness:contrast:imgWidth:cancel:;
@end
