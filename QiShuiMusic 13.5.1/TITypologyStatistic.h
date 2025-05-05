@interface TITypologyStatistic : NSObject
@property (nonatomic) NSDictionary structuredReport;
@property (nonatomic) NSDictionary aggregateReport;
- (void)visitRecordCandidateRejected:;
- (void)visitRecordTextAccepted:;
- (void)visitRecordSkipHitTest:;
- (void)visitRecordKeyboardInput:;
- (id)structuredReport;
- (id)aggregateReport;
- (void)visitRecordHitTest:;
- (void)visitRecordSync:;
- (void)visitTypologyLog:;
- (void)visitTypologyRecord:;
- (void)visitRecordAutocorrections:;
- (void)visitRecordCandidateResultSet:;
- (void)visitRecordAcceptedCandidate:;
- (void)visitRecordReplacements:;
- (void)visitRecordRefinements:;
- (void)visitRecordPhraseBoundaryAdjustment:;
- (void)visitRecordSetOriginalInput:;
- (void)visitRecordLastAcceptedCandidateCorrected:;
- (void)prepareForComputation;
- (void)finalizeComputation;
+ (id)statistic;
@end
