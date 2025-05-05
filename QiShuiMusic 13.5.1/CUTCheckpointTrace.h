@interface CUTCheckpointTrace : CUTCheckpointRange
@property (nonatomic) NSMutableArray mutableCheckpoints;
- (void)freeze;
- (void).cxx_destruct;
- (id)description;
- (void)_appendReportToMutableString:indentation:paddedNameLength:;
- (void)setAssertsUseAfterFreeze:;
- (id)initWithStartDate:endDate:name:uniqueIdentifier:;
- (id)appendCheckpoint:;
- (id)checkpoints;
- (id)instantCheckpointWithName:;
- (id)instantCheckpointWithName:extraIdentifier:;
- (id)rangeCheckpointWithName:;
- (id)rangeCheckpointWithName:extraIdentifier:;
- (id)_identifierWithExtraIdentifier:;
- (id)mutableCheckpoints;
- (void)setMutableCheckpoints:;
@end
