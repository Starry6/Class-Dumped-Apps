@interface VisualIntelligence.BoxScorerCompatible : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithGranularity:xMean:yMean:std:;
- (double)scoreWithXTopLeft:yTopLeft:width:height:;
@end
