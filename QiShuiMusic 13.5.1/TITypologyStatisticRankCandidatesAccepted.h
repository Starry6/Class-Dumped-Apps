@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections
@property (nonatomic) NSDictionary histogram;
@property (nonatomic) q lengthOfSelectedCandidates;
@property (nonatomic) q lengthOfSelectedPredictions;
- (id)init;
- (void)visitRecordKeyboardInput:;
- (id)histogram;
- (id)structuredReport;
- (void).cxx_destruct;
- (unsigned long long)rankOfCandidate:;
- (void)addLengthOfSelectedCandidate:;
- (void)addLengthOfSelectedPrediction:;
- (void)countSelectedAutocorrection:;
- (void)countSelectedInputString;
- (void)countSelectedInputStringToRejectAutocorrection;
- (BOOL)isCandidatePrediction:;
- (void)countSelectedPrediction:withRank:;
- (void)countSelectedCandidate:withRank:;
- (void)rankAndCountSelectedCandidate:;
- (long long)lengthOfSelectedCandidates;
- (long long)lengthOfSelectedPredictions;
@end
