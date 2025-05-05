@interface VCPVideoHumanActionClassifier : VCPVideoAnalyzer
- (id)init;
- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)createModel;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
- (id)privateResults;
- (int)detect;
- (int)prepareData:;
- (id)analyzeBodyArray:;
- (id)keypointsFromObservations:;
@end
