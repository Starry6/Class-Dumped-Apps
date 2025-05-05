@interface NLLMSLanguageModelSession : NLLanguageModelSession
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (id).cxx_construct;
- (id)initWithLanguageModel:options:;
- (id)conditionalProbabilityForToken:context:;
- (id)conditionalProbabilityForString:context:;
- (long long)blocklistStatusForString:matchType:;
- (void)adaptToToken:context:;
- (void)unadaptToToken:context:;
- (void)enumeratePredictionsForContext:maximumPredictions:maximumTokensPerPrediction:withBlock:;
@end
