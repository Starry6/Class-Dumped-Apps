@interface VCPImageSaliencyAnalyzerBinary : VCPImageSaliencyAnalyzer
- (void).cxx_destruct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)prepareModelForSourceWidth:andSourceHeight:;
- (float)outputScaling;
- (int)getSalientRegions:;
@end
