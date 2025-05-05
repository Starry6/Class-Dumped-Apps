@interface VCPCNNBlurAnalyzerEspresso : VCPCNNBlurAnalyzer
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)prepareModelForSourceWidth:andSourceHeight:;
- (id)initWithRevision:;
- (void)copyBufferFrom:fromStride:toPtr:toStride:toWidth:toHeight:;
- (float)calculateScoreFromNetworkOutputV2:;
- (int)computeSharpnessScore:textureness:contrast:imgWidth:cancel:;
+ (id)sharedModel:;
+ (id)sharedModelPoolWithRevision:;
@end
