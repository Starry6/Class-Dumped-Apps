@interface PRNLPLanguageModelState : NSObject
@property (nonatomic) PRNLPLanguageModel languageModel;
- (void)dealloc;
- (id)languageModel;
- (id)initWithLanguageModel:state:;
- (BOOL)getConditionalProbabilityForString:probability:;
- (id)conditionalProbabilityDictionaryForStrings:;
- (void)enumeratePredictions:maxTokensPerPrediction:withBlock:;
@end
