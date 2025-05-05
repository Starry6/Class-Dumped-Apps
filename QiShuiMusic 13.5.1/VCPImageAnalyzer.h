@interface VCPImageAnalyzer : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (int)processTile:results:cancel:;
- (int)aggregateTileResults:tileRect:imageSize:landscape:results:;
- (int)analyzePixelBufferInTiles:results:cancel:;
- (int)calculateTextureness:height:width:sdof:result:;
@end
