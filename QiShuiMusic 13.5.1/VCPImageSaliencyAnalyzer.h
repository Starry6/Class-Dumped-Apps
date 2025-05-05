@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (id)initWithMaxNumRegions:prune:;
- (int)prepareModelForSourceWidth:andSourceHeight:;
- (int)copyImage:toData:withChunk:;
- (int)scaleImage:toData:withWidth:andHeight:;
- (float)computeScore:width:height:posX:posY:;
- (float)outputScaling;
- (int)generateSalientRegion:outHeight:outWidth:;
- (int)getSalientRegions:;
- (int)saliencyDetection:salientRegions:cancel:;
- (int)processTile:results:cancel:;
- (int)aggregateTileResults:tileRect:imageSize:landscape:results:;
- (id)pruneRegions:;
+ (id)analyzerWith:prune:;
@end
