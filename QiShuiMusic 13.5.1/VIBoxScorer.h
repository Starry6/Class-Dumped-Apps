@interface VIBoxScorer : NSObject
- (void).cxx_destruct;
- (id)initWithGranularity:xMean:yMean:std:;
- (double)scoreWithXTopLeft:yTopLeft:width:height:;
- (double)scoreWithBoundingBox:;
@end
