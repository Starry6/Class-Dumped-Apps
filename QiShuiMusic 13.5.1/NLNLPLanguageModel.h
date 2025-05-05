@interface NLNLPLanguageModel : NLLanguageModel
- (long long)granularity;
- (BOOL)generatesPredictions;
- (id)sessionWithOptions:;
- (double)conditionalProbabilityForEntry:context:;
- (double)conditionalProbabilityForWord:context:;
- (void)enumeratePredictionsForContext:maxEntriesPerPrediction:usingBlock:;
- (void)enumeratePredictionsForContext:maxWordsPerPrediction:usingBlock:;
- (id)initWithLocalization:options:;
@end
