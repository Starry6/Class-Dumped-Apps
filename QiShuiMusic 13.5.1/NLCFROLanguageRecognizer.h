@interface NLCFROLanguageRecognizer : NLLanguageRecognizer
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)dominantLanguage;
- (void)processString:;
- (id)languageHypothesesWithMaximum:;
+ (id)dominantLanguageForString:;
@end
