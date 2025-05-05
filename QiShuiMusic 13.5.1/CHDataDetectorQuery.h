@interface CHDataDetectorQuery : CHQuery
@property (nonatomic) NSArray foundItems;
- (void)stop;
- (id)debugName;
- (void).cxx_destruct;
- (id)foundItems;
- (id)initWithRecognitionSession:;
- (void)q_updateQueryResult;
- (void)_setFoundItems:;
- (id)_dataDetectorResultsForSessionResult:;
- (void)_enumerateDetectedRangesForContextualTextResults:usingBlock:;
@end
