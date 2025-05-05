@interface NLLMSLanguageModel : NLLanguageModel
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)generatesPredictions;
- (id)sessionWithOptions:;
- (id)initWithLocalization:options:;
- (id)_underlyingModel;
@end
