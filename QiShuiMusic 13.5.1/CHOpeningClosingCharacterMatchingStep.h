@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStepModifyingOriginalTokens
@property (nonatomic) NSCharacterSet openingBracketCharacters;
@property (nonatomic) NSCharacterSet closingBracketCharacters;
@property (nonatomic) NSCharacterSet openingQuoteCharacters;
@property (nonatomic) NSCharacterSet closingQuoteCharacters;
@property (nonatomic) NSCharacterSet symmetricQuoteCharacters;
- (id)init;
- (void).cxx_destruct;
- (id)process:options:;
- (id)openingBracketCharacters;
- (void)setOpeningBracketCharacters:;
- (id)closingBracketCharacters;
- (void)setClosingBracketCharacters:;
- (id)openingQuoteCharacters;
- (void)setOpeningQuoteCharacters:;
- (id)closingQuoteCharacters;
- (void)setClosingQuoteCharacters:;
- (id)symmetricQuoteCharacters;
- (void)setSymmetricQuoteCharacters:;
@end
