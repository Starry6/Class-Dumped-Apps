@interface PRLanguage : NSObject
- (id)localization;
- (void)dealloc;
- (unsigned char)languageCode;
- (id)identifier;
- (unsigned int)encoding;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isGerman;
- (id)fallbackLocalization;
- (id)languageModelLocalization;
- (id)languageModelFallbackLocalization;
- (id)transliterationLocalization;
- (unsigned long long)orthographyIndex;
- (unsigned char)languageDialect;
- (unsigned char)languageMode;
- (id)oneLetterWords;
- (id)twoLetterWords;
- (id)accents;
- (BOOL)isBicameral;
- (BOOL)isSupportedAssetLexiconLanguage;
- (BOOL)usesOrdinalPeriod;
- (BOOL)usesSentencePieceModel;
- (BOOL)isArabic;
- (BOOL)isBulgarian;
- (BOOL)isCzech;
- (BOOL)isDanish;
- (BOOL)isDutch;
- (BOOL)isEnglish;
- (BOOL)isFinnish;
- (BOOL)isFrench;
- (BOOL)isGreek;
- (BOOL)isHebrew;
- (BOOL)isHindi;
- (BOOL)isHungarian;
- (BOOL)isIndonesian;
- (BOOL)isIrishGaelic;
- (BOOL)isItalian;
- (BOOL)isKorean;
- (BOOL)isKazakh;
- (BOOL)isMarathi;
- (BOOL)isNorwegian;
- (BOOL)isNynorsk;
- (BOOL)isPersian;
- (BOOL)isPolish;
- (BOOL)isPortuguese;
- (BOOL)isPunjabi;
- (BOOL)isRomanian;
- (BOOL)isRussian;
- (BOOL)isSpanish;
- (BOOL)isSwedish;
- (BOOL)isTelugu;
- (BOOL)isThai;
- (BOOL)isTurkish;
- (BOOL)isUkrainian;
- (BOOL)isVietnamese;
+ (id)supportedLanguages;
+ (BOOL)supportsSecureCoding;
+ (id)supportedLocalizations;
+ (id)dataBundle;
+ (id)languageModelLocalizationForLanguage:;
+ (id)localizationsForLanguage:;
+ (id)localizationForLanguage:;
+ (id)fallbackLocalizationForLanguage:;
+ (id)languageModelFallbackLocalizationForLanguage:;
+ (id)textInputModeForLanguage:;
+ (unsigned long long)orthographyIndexForLanguageCode:;
+ (unsigned long long)orthographyIndexForOtherLanguage:;
+ (unsigned int)encodingForOrthographyIndex:;
+ (void)getCodesForLanguage:languageCode:languageDialect:languageMode:orthographyIndex:encoding:;
+ (id)supportedAssetLanguages;
+ (id)supportedAssetLexiconLanguages;
+ (id)supportedLatinLanguages;
+ (id)supportedNonLatinLanguages;
+ (id)supportedCyrillicLanguages;
+ (id)supportedTransliterationLanguages;
+ (id)transliterationLocalizationForLanguage:;
+ (id)supportedEnglishLocalizationAdditions;
+ (id)englishLocalizationAdditionForLanguage:;
+ (id)languagesUsingOrdinalPeriod;
+ (id)languageObjectWithIdentifier:;
@end
