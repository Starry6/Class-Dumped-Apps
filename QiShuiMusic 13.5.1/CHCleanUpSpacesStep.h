@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens
@property (nonatomic) NSLocale locale;
- (void)setLocale:;
- (id)locale;
- (void).cxx_destruct;
- (id)initWithLocale:;
- (id)process:options:;
- (id)prepareQuoteCountFromLeftContext:;
- (id)cleanUpSpacesInToken:leftContext:inString:withQuoteCount:;
@end
