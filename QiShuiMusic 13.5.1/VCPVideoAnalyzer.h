@interface VCPVideoAnalyzer : NSObject
- (id)results;
- (int)analyzeFrame:withTimestamp:andDuration:flags:;
- (int)finishAnalysisPass:;
+ (unsigned long long)dependencies;
@end
