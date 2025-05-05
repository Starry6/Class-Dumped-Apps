@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask
@property (nonatomic) <CHRecognitionSessionTextInputTaskDelegate> delegate;
@property (nonatomic) NSArray initialTextInputTargets;
@property (nonatomic) CHTextInputQuery activeTextInputQuery;
- (void).cxx_destruct;
- (id)clutterFilter;
- (id)initWithLocales:strokeProvider:initialTextInputTargets:inputResult:recognitionEnvironment:;
- (id)initWithLocales:preferredLocales:strokeProvider:inputResult:recognitionQOSClass:;
- (id)recognitionResultsForGroupingResult:groupingManager:;
- (id)textCorrectionResultsForGroupingResult:groupingManager:;
- (id)newStrokeClassifier;
- (id)newGroupingManager;
- (id)_textCorrectionResultForStrokeGroup:groupingManager:targetContentInfo:locales:previousCorrectionResult:;
- (id)_dataSource:inputTargetContentInfoForStrokeGroups:groupingManager:;
- (id)_dataSource:textInputTargetForStrokeGroup:simultaneousGroups:;
- (id)initialTextInputTargets;
- (id)activeTextInputQuery;
- (void)setActiveTextInputQuery:;
+ (id)_contextBoundsForTargetContentInfo:;
+ (id)lastStrokeInGroup:strokeProvider:;
@end
