@interface NLLMTokenIDConverter : NLTokenIDConverter
@property (nonatomic) NLLanguageModel languageModel;
@property (nonatomic) NLTagger tagger;
- (id)languageModel;
- (void).cxx_destruct;
- (unsigned int)tokenIDForString:;
- (id)stringForTokenID:;
- (id)stringForTokenIDs:length:;
- (void)enumerateTokenIDsForString:range:withBlock:;
- (id)initWithLanguageModel:;
- (id)tagger;
@end
