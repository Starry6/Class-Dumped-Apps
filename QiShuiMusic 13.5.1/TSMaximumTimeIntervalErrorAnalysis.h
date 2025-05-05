@interface TSMaximumTimeIntervalErrorAnalysis : TSTimeErrorAnalysis
@property (nonatomic) NSArray mtie;
- (void)dealloc;
- (id)initWithTimeErrorValues:;
- (void)_performAnalysisFromWindowSize:toWindowSize:stepSize:;
- (BOOL)exportAnalysisToDirectoryURL:;
- (BOOL)exportAnalysisToDirectoryURL:withFilename:fromStartWindowSize:toEndWindowSize:stepSize:;
- (BOOL)exportTimeErrorsToDirectoryURL:;
- (id)mtie;
- (id)mtieFromStartWindowSize:toEndWindowSize:stepSize:;
+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotYLimits:;
+ (id)plotSize;
+ (id)additionalScriptInitialization;
+ (id)additionalScriptRecords;
+ (id)additionalScriptPlots:;
@end
