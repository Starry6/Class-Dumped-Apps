@interface NLTokenIDBasedLanguageModelState : NLLanguageModelState
- (void)addContext:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)resetContext;
- (unsigned long long)contextLength;
- (id)initWithSession:options:context:;
- (id)conditionalProbabilityForToken:;
- (void)enumeratePredictions:maximumTokensPerPrediction:withBlock:;
- (id)contextTokenIDArrayForContext:;
- (id)initWithSession:options:context:contextTokenIDArray:;
- (void)addContextTokenIDs:length:;
- (id)contextTokenIDs;
- (id)conditionalProbabilityForTokenID:;
- (id)conditionalProbabilitiesForTokenIDs:count:;
@end
