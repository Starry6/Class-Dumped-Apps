@interface TSAllanDeviationAnalysis : TSTimeErrorAnalysis
@property (nonatomic) NSArray adev;
- (void)dealloc;
- (id)initWithTimeErrorValues:;
- (long long)analysisLimit;
- (void)_performAnalysisFromWindowSize:toWindowSize:stepSize:;
- (BOOL)exportAnalysisToDirectoryURL:;
- (BOOL)exportAnalysisToDirectoryURL:withFilename:fromStartWindowSize:toEndWindowSize:stepSize:;
- (BOOL)exportTimeErrorsToDirectoryURL:;
- (id)adev;
- (id)adevFromStartWindowSize:toEndWindowSize:stepSize:;
+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotSize;
@end
