@interface CHNumberFieldResultReorderingStep : CHPostprocessingStepModifyingOriginalTokens
@property (nonatomic) NSCharacterSet allowedCharacters;
@property (nonatomic) NSDictionary characterReplacements;
- (void).cxx_destruct;
- (void)setAllowedCharacters:;
- (id)allowedCharacters;
- (id)process:options:;
- (id)initForPhoneNumberFields;
- (id)initForDigitFields;
- (long long)countUnallowedCharactersInString:;
- (long long)compareStringForPhoneNumberCompatibility:with:;
- (id)characterReplacements;
- (void)setCharacterReplacements:;
+ (id)tokenRowAsString:;
@end
