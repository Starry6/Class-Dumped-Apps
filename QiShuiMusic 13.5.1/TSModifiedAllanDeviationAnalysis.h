@interface TSModifiedAllanDeviationAnalysis : TSTimeErrorAnalysis
@property (nonatomic) NSArray madev;
- (void)dealloc;
- (id)initWithTimeErrorValues:;
- (long long)analysisLimit;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (void)_performAnalysisFromWindowSize:toWindowSize:stepSize:;
- (BOOL)exportAnalysisToDirectoryURL:;
- (BOOL)exportAnalysisToDirectoryURL:withFilename:fromStartWindowSize:toEndWindowSize:stepSize:;
- (BOOL)exportTimeErrorsToDirectoryURL:;
- (id)madev;
- (id)madevFromStartWindowSize:toEndWindowSize:stepSize:;
+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotSize;
@end
