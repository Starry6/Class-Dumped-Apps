@interface TITypologyStatisticComposite : TITypologyStatistic
@property (nonatomic) NSArray statistics;
- (void)visitRecordCandidateRejected:;
- (void)visitRecordTextAccepted:;
- (void)visitRecordSkipHitTest:;
- (void)visitRecordKeyboardInput:;
- (id)structuredReport;
- (id)aggregateReport;
- (void)visitRecordHitTest:;
- (id)initWithArray:;
- (void).cxx_destruct;
- (id)statistics;
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
+ (id)statisticCompositeWithStatistics:;
@end
