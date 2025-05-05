@interface NLNLPLanguageModelSession : NLLanguageModelSession
- (void)dealloc;
- (id)description;
- (id)initWithLanguageModel:options:;
- (id)conditionalProbabilityForToken:context:;
- (id)conditionalProbabilityForString:context:;
- (id)conditionalProbabilitiesForStrings:context:;
- (id)stateWithOptions:;
- (void)enumeratePredictionsForContext:maximumPredictions:maximumTokensPerPrediction:withBlock:;
- (id)predictionOptionsForMaximumPredictions:maximumTokensPerPrediction:;
- (id)predictionInitialCharacterSet;
@end
