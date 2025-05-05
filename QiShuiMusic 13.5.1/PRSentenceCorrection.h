@interface PRSentenceCorrection : NSObject
- (void)dealloc;
- (id)range;
- (id)description;
- (int)category;
- (id)corrections;
- (id)word;
- (id)initWithCategory:range:word:corrections:;
- (BOOL)presentAsSpellingError;
- (BOOL)presentAsAutocorrection;
- (BOOL)presentAsGrammarError;
@end
