@interface NLTokenIDBasedLanguageModelSession : NLLanguageModelSession
- (id)stateWithOptions:;
- (id)conditionalProbabilityForTokenID:contextTokenIDs:length:;
- (id)conditionalProbabilitiesForTokenIDs:count:contextTokenIDs:length:;
- (void)enumeratePredictionsForContextTokenIDs:length:maximumPredictions:maximumTokensPerPrediction:withBlock:;
- (long long)blocklistStatusForTokenIDs:length:matchType:;
- (void)adaptToTokenID:contextTokenIDs:length:;
- (void)unadaptToTokenID:contextTokenIDs:length:;
@end
