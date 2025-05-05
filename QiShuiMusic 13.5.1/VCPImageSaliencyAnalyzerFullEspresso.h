@interface VCPImageSaliencyAnalyzerFullEspresso : VCPImageSaliencyAnalyzer
- (void)dealloc;
- (void).cxx_destruct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)prepareModelForSourceWidth:andSourceHeight:;
- (int)getSalientRegions:;
+ (id)sharedModel:;
@end
