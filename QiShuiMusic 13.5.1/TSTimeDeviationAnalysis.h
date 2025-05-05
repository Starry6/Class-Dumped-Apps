@interface TSTimeDeviationAnalysis : TSTimeErrorAnalysis
@property (nonatomic) NSArray tdev;
- (void)dealloc;
- (id)initWithTimeErrorValues:;
- (long long)analysisLimit;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (void)_performAnalysisFromWindowSize:toWindowSize:stepSize:;
- (BOOL)exportAnalysisToDirectoryURL:;
- (BOOL)exportAnalysisToDirectoryURL:withFilename:fromStartWindowSize:toEndWindowSize:stepSize:;
- (BOOL)exportTimeErrorsToDirectoryURL:;
- (id)tdev;
- (id)tdevFromStartWindowSize:toEndWindowSize:stepSize:;
+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotSize;
@end
