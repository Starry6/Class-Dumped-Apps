@interface VCPVideoHumanActionAnalyzer : VCPVideoAnalyzer
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (id)privateResults;
- (id)clipResults:;
- (float)normDistance:point2:;
- (void)computeVar:index2:interVar:intraVar:;
- (void)computeActionScore;
- (id)scaleRect:scaleX:scaleY:;
- (float)intersectionOverUnion:rect:;
- (id)initWithFrameStats:timeOfInterest:phFaces:;
- (id)associatePerson:withPHFaces:;
- (int)processPersons:humanBounds:dominantPersonIdx:frame:timestamp:duration:;
- (void)addActiveResults:;
@end
