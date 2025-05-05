@interface TSRootMeanSquaredTimeIntervalErrorAnalysis : TSTimeErrorAnalysis
@property (nonatomic) NSArray rmstie;
- (void)dealloc;
- (id)initWithTimeErrorValues:;
- (void)_performAnalysisFromWindowSize:toWindowSize:stepSize:;
- (BOOL)exportAnalysisToDirectoryURL:;
- (BOOL)exportAnalysisToDirectoryURL:withFilename:fromStartWindowSize:toEndWindowSize:stepSize:;
- (BOOL)exportTimeErrorsToDirectoryURL:;
- (id)rmstie;
- (id)rmstieFromStartWindowSize:toEndWindowSize:stepSize:;
+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotSize;
@end
