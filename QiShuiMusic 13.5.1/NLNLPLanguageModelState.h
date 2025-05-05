@interface NLNLPLanguageModelState : NLLanguageModelState
- (void)dealloc;
- (void)addContext:;
- (id)description;
- (id)copyWithZone:;
- (void)resetContext;
- (id)conditionalProbabilityForToken:;
- (id)conditionalProbabilityForString:;
- (id)conditionalProbabilitiesForStrings:;
- (void)enumeratePredictions:maximumTokensPerPrediction:withBlock:;
- (id)initWithSession:options:context:modelState:;
@end
