@interface NLLMLanguageModel : NLLanguageModel
- (void).cxx_destruct;
- (BOOL)generatesPredictions;
- (id)sessionWithOptions:;
- (id)tokenIDConverter;
@end
