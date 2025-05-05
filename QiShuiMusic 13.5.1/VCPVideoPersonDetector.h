@interface VCPVideoPersonDetector : VCPVideoAnalyzer
- (id)init;
- (void).cxx_destruct;
- (id)persons;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)detectPersons:persons:;
@end
