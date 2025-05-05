@interface CHTransliterateConfusableCharactersStep : CHPostprocessingStep
@property (nonatomic) NSArray characterTransliterations;
@property (nonatomic) r^{_LXLexicon=} staticLexicon;
@property (nonatomic) r^{_LXLexicon=} customLexicon;
@property (nonatomic) NSLocale locale;
- (void)setLocale:;
- (id)locale;
- (void).cxx_destruct;
- (id)staticLexicon;
- (void)setStaticLexicon:;
- (id)customLexicon;
- (void)setCustomLexicon:;
- (id)process:options:;
- (id)characterTransliterations;
- (id)initWithStaticLexicon:customLexicon:locale:;
- (id)handleConfusableCharactersInToken:previousContext:;
- (unsigned int)wordIDForCandidateString:;
- (BOOL)isMatchingStringInLexicon:withLexicon:;
- (BOOL)isStringInLexicon:;
- (void)setCharacterTransliterations:;
+ (id)characterTransliterations;
@end
