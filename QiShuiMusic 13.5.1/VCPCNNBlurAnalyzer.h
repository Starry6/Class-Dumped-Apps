@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer
@property (nonatomic) BOOL sdof;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)prepareModelForSourceWidth:andSourceHeight:;
- (int)scaleRegion:ofImage:toData:withWidth:andHeight:;
- (id)initWithRevision:;
- (void)copyBufferFrom:fromStride:toPtr:toStride:toWidth:toHeight:;
- (int)computeSharpnessScore:textureness:contrast:imgWidth:cancel:;
- (unsigned long long)getRevision;
- (float)calculateScoreFromNetworkOutput:outChannel:outHeight:outWidth:textureness:contrast:imgWidth:;
- (int)computeCNNBasedSharpness:sharpnessScore:textureScore:contrast:cancel:;
- (BOOL)sdof;
- (void)setSdof:;
+ (id)analyzer;
+ (id)analyzerWithRevision:;
@end
