@interface CHCharacterSetRules : NSObject
@property (nonatomic) NSCharacterSet lowercaseCharSet;
@property (nonatomic) NSCharacterSet uppercaseCharSet;
@property (nonatomic) NSCharacterSet digitCharSet;
@property (nonatomic) NSCharacterSet startPunctuationCharSet;
@property (nonatomic) NSCharacterSet middlePunctuationCharSet;
@property (nonatomic) NSCharacterSet endOfWordPunctuationCharSet;
@property (nonatomic) NSCharacterSet endOfSentencePunctuationCharSet;
@property (nonatomic) NSCharacterSet digitStartPunctuationCharSet;
@property (nonatomic) NSCharacterSet digitEndPunctuationCharSet;
@property (nonatomic) NSCharacterSet arithmeticOperatorCharSet;
@property (nonatomic) NSCharacterSet dateTimeSeparatorCharSet;
@property (nonatomic) NSCharacterSet dateTimeEndLetterCharSet;
@property (nonatomic) NSCharacterSet numeralEndLetterCharSet;
@property (nonatomic) NSCharacterSet lexiconSkipCharSet;
@property (nonatomic) NSCharacterSet containsDotCharSet;
@property (nonatomic) NSCharacterSet containsTwoDotsCharSet;
@property (nonatomic) NSCharacterSet prefixCapitalizationExceptionCharSet;
@property (nonatomic) NSCharacterSet selfLoopPunctuationCharSet;
@property (nonatomic) NSCharacterSet emoticonTopCharSet;
@property (nonatomic) NSCharacterSet emoticonMiddleCharSet;
@property (nonatomic) NSCharacterSet emoticonBottomCharSet;
@property (nonatomic) NSCharacterSet emailAtCharSet;
@property (nonatomic) NSCharacterSet emailPunctuationCharSet;
@property (nonatomic) NSCharacterSet urlPunctuationCharSet;
@property (nonatomic) NSCharacterSet nonSpaceSeparatorCharSet;
@property (nonatomic) NSCharacterSet punctuationThatNeedSpaceCleanup;
@property (nonatomic) NSCharacterSet currencySymbols;
@property (nonatomic) NSCharacterSet symbolsRequiringSpaceBeforeInFrench;
@property (nonatomic) NSCharacterSet sentenceStartPunctuationInSpanish;
@property (nonatomic) NSCharacterSet commonJapaneseSymbols;
@property (nonatomic) NSCharacterSet CJKPairedPunctuationsCharSet;
@property (nonatomic) NSCharacterSet alphaNumericCharSet;
@property (nonatomic) {map<unsigned int strokeMaxPenalties;
@property (nonatomic) {map<unsigned int signatureUniChar;
@property (nonatomic) NSObject<OS_dispatch_queue> _charSetRulesQueue;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)_expectedMaxStrokeCount:;
- (unsigned long long)_expectedMinStrokeCount:;
- (unsigned long long)_characterType:;
- (unsigned long long)_expectedMaxDotCount:;
- (id)lowercaseCharSet;
- (void)setLowercaseCharSet:;
- (id)uppercaseCharSet;
- (void)setUppercaseCharSet:;
- (id)digitCharSet;
- (void)setDigitCharSet:;
- (id)startPunctuationCharSet;
- (void)setStartPunctuationCharSet:;
- (id)middlePunctuationCharSet;
- (void)setMiddlePunctuationCharSet:;
- (id)endOfWordPunctuationCharSet;
- (void)setEndOfWordPunctuationCharSet:;
- (id)endOfSentencePunctuationCharSet;
- (void)setEndOfSentencePunctuationCharSet:;
- (id)digitStartPunctuationCharSet;
- (void)setDigitStartPunctuationCharSet:;
- (id)digitEndPunctuationCharSet;
- (void)setDigitEndPunctuationCharSet:;
- (id)arithmeticOperatorCharSet;
- (void)setArithmeticOperatorCharSet:;
- (id)dateTimeSeparatorCharSet;
- (void)setDateTimeSeparatorCharSet:;
- (id)dateTimeEndLetterCharSet;
- (void)setDateTimeEndLetterCharSet:;
- (id)numeralEndLetterCharSet;
- (void)setNumeralEndLetterCharSet:;
- (id)lexiconSkipCharSet;
- (void)setLexiconSkipCharSet:;
- (id)containsDotCharSet;
- (void)setContainsDotCharSet:;
- (id)containsTwoDotsCharSet;
- (void)setContainsTwoDotsCharSet:;
- (id)prefixCapitalizationExceptionCharSet;
- (void)setPrefixCapitalizationExceptionCharSet:;
- (id)selfLoopPunctuationCharSet;
- (void)setSelfLoopPunctuationCharSet:;
- (id)emoticonTopCharSet;
- (void)setEmoticonTopCharSet:;
- (id)emoticonMiddleCharSet;
- (void)setEmoticonMiddleCharSet:;
- (id)emoticonBottomCharSet;
- (void)setEmoticonBottomCharSet:;
- (id)emailAtCharSet;
- (void)setEmailAtCharSet:;
- (id)emailPunctuationCharSet;
- (void)setEmailPunctuationCharSet:;
- (id)urlPunctuationCharSet;
- (void)setUrlPunctuationCharSet:;
- (id)nonSpaceSeparatorCharSet;
- (void)setNonSpaceSeparatorCharSet:;
- (id)punctuationThatNeedSpaceCleanup;
- (void)setPunctuationThatNeedSpaceCleanup:;
- (id)currencySymbols;
- (void)setCurrencySymbols:;
- (id)symbolsRequiringSpaceBeforeInFrench;
- (void)setSymbolsRequiringSpaceBeforeInFrench:;
- (id)sentenceStartPunctuationInSpanish;
- (void)setSentenceStartPunctuationInSpanish:;
- (id)commonJapaneseSymbols;
- (void)setCommonJapaneseSymbols:;
- (id)CJKPairedPunctuationsCharSet;
- (void)setCJKPairedPunctuationsCharSet:;
- (id)alphaNumericCharSet;
- (void)setAlphaNumericCharSet:;
- (id)strokeMaxPenalties;
- (void)setStrokeMaxPenalties:;
- (id)signatureUniChar;
- (void)setSignatureUniChar:;
- (id)_charSetRulesQueue;
+ (id)sharedCharacterSetRules;
+ (unsigned long long)expectedMaxStrokeCount:;
+ (unsigned long long)expectedMinStrokeCount:;
+ (unsigned long long)expectedMaxDotCount:;
+ (unsigned long long)characterType:;
+ (unsigned long long)characterTypeFromString:;
@end
