@interface VCPImageSaliencyAnalyzerFull : VCPImageSaliencyAnalyzer
- (void).cxx_destruct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)prepareModelForSourceWidth:andSourceHeight:;
- (int)getSalientRegions:;
@end
