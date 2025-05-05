@interface VCPVideoPetsActionAnalyzer : VCPVideoAnalyzer
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (float)normDistance:point2:;
- (id)initWithFrameStats:timeOfInterest:;
- (void)computeVar:index2:interVar:intraVar:;
- (void)computeActionScore;
- (id)scaleRect:scaleX:scaleY:;
- (float)intersectionOverUnion:rect:;
- (int)processPets:petsBounds:dominantPetIdx:frame:timestamp:duration:;
@end
