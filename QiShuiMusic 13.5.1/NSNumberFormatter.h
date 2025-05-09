@interface NSNumberFormatter : NSFormatter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q formattingContext;
@property (nonatomic) Q numberStyle;
@property (nonatomic) NSLocale locale;
@property (nonatomic) BOOL generatesDecimalNumbers;
@property (nonatomic) Q formatterBehavior;
@property (nonatomic) NSString negativeFormat;
@property (nonatomic) NSDictionary textAttributesForNegativeValues;
@property (nonatomic) NSString positiveFormat;
@property (nonatomic) NSDictionary textAttributesForPositiveValues;
@property (nonatomic) BOOL allowsFloats;
@property (nonatomic) NSString decimalSeparator;
@property (nonatomic) BOOL alwaysShowsDecimalSeparator;
@property (nonatomic) NSString currencyDecimalSeparator;
@property (nonatomic) BOOL usesGroupingSeparator;
@property (nonatomic) NSString groupingSeparator;
@property (nonatomic) NSString zeroSymbol;
@property (nonatomic) NSDictionary textAttributesForZero;
@property (nonatomic) NSString nilSymbol;
@property (nonatomic) NSDictionary textAttributesForNil;
@property (nonatomic) NSString notANumberSymbol;
@property (nonatomic) NSDictionary textAttributesForNotANumber;
@property (nonatomic) NSString positiveInfinitySymbol;
@property (nonatomic) NSDictionary textAttributesForPositiveInfinity;
@property (nonatomic) NSString negativeInfinitySymbol;
@property (nonatomic) NSDictionary textAttributesForNegativeInfinity;
@property (nonatomic) NSString positivePrefix;
@property (nonatomic) NSString positiveSuffix;
@property (nonatomic) NSString negativePrefix;
@property (nonatomic) NSString negativeSuffix;
@property (nonatomic) NSString currencyCode;
@property (nonatomic) NSString currencySymbol;
@property (nonatomic) NSString internationalCurrencySymbol;
@property (nonatomic) NSString percentSymbol;
@property (nonatomic) NSString perMillSymbol;
@property (nonatomic) NSString minusSign;
@property (nonatomic) NSString plusSign;
@property (nonatomic) NSString exponentSymbol;
@property (nonatomic) Q groupingSize;
@property (nonatomic) Q secondaryGroupingSize;
@property (nonatomic) NSNumber multiplier;
@property (nonatomic) Q formatWidth;
@property (nonatomic) NSString paddingCharacter;
@property (nonatomic) Q paddingPosition;
@property (nonatomic) Q roundingMode;
@property (nonatomic) NSNumber roundingIncrement;
@property (nonatomic) Q minimumIntegerDigits;
@property (nonatomic) Q maximumIntegerDigits;
@property (nonatomic) Q minimumFractionDigits;
@property (nonatomic) Q maximumFractionDigits;
@property (nonatomic) NSNumber minimum;
@property (nonatomic) NSNumber maximum;
@property (nonatomic) NSString currencyGroupingSeparator;
@property (nonatomic) BOOL lenient;
@property (nonatomic) BOOL usesSignificantDigits;
@property (nonatomic) Q minimumSignificantDigits;
@property (nonatomic) Q maximumSignificantDigits;
@property (nonatomic) BOOL partialStringValidationEnabled;
- (id)stringFromInteger:;
- (id)stringForObjectValue:;
- (void)receiveObservedValue:;
- (void)_reset;
- (void)setLocale:;
- (id)init;
- (void)dealloc;
- (id)minimum;
- (BOOL)getObjectValue:forString:errorDescription:;
- (void)setMinimumFractionDigits:;
- (id)maximum;
- (void)setMultiplier:;
- (id)numberFromString:;
- (void)setFormattingContext:;
- (id)locale;
- (void)setMinimum:;
- (id)initWithCoder:;
- (id)currencyCode;
- (long long)formattingContext;
- (id)multiplier;
- (unsigned long long)maximumFractionDigits;
- (void)encodeWithCoder:;
- (void)_invalidateCache;
- (void)_clearFormatter;
- (unsigned long long)minimumFractionDigits;
- (void)setMaximumFractionDigits:;
- (void)setMaximum:;
- (BOOL)_mayDecorateAttributedStringForObjectValue:;
- (unsigned long long)roundingMode;
- (id)copyWithZone:;
- (BOOL)getObjectValue:forString:range:error:;
- (void)_regenerateFormatter;
- (unsigned long long)formatterBehavior;
- (void)setFormatterBehavior:;
- (BOOL)isLenient;
- (void)setLenient:;
- (BOOL)_usesCharacterDirection;
- (void)_setUsesCharacterDirection:;
- (id)attributedStringForObjectValue:withDefaultAttributes:;
- (long long)_cacheGenerationCount;
- (BOOL)_tracksCacheGenerationCount;
- (id)__Keynote_NOOP;
- (id)stringFromNumber:;
- (unsigned long long)numberStyle;
- (void)setNumberStyle:;
- (BOOL)generatesDecimalNumbers;
- (void)setGeneratesDecimalNumbers:;
- (id)negativeFormat;
- (void)setNegativeFormat:;
- (id)textAttributesForNegativeValues;
- (void)setTextAttributesForNegativeValues:;
- (id)positiveFormat;
- (void)setPositiveFormat:;
- (id)textAttributesForPositiveValues;
- (void)setTextAttributesForPositiveValues:;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:;
- (id)decimalSeparator;
- (void)setDecimalSeparator:;
- (BOOL)alwaysShowsDecimalSeparator;
- (void)setAlwaysShowsDecimalSeparator:;
- (id)currencyDecimalSeparator;
- (void)setCurrencyDecimalSeparator:;
- (BOOL)usesGroupingSeparator;
- (void)setUsesGroupingSeparator:;
- (id)groupingSeparator;
- (void)setGroupingSeparator:;
- (id)zeroSymbol;
- (void)setZeroSymbol:;
- (id)textAttributesForZero;
- (void)setTextAttributesForZero:;
- (id)nilSymbol;
- (void)setNilSymbol:;
- (id)textAttributesForNil;
- (void)setTextAttributesForNil:;
- (id)notANumberSymbol;
- (void)setNotANumberSymbol:;
- (id)textAttributesForNotANumber;
- (void)setTextAttributesForNotANumber:;
- (id)positiveInfinitySymbol;
- (void)setPositiveInfinitySymbol:;
- (id)textAttributesForPositiveInfinity;
- (void)setTextAttributesForPositiveInfinity:;
- (id)negativeInfinitySymbol;
- (void)setNegativeInfinitySymbol:;
- (id)textAttributesForNegativeInfinity;
- (void)setTextAttributesForNegativeInfinity:;
- (id)positivePrefix;
- (void)setPositivePrefix:;
- (id)positiveSuffix;
- (void)setPositiveSuffix:;
- (id)negativePrefix;
- (void)setNegativePrefix:;
- (id)negativeSuffix;
- (void)setNegativeSuffix:;
- (void)setCurrencyCode:;
- (BOOL)_hasSetCurrencyCode;
- (id)currencySymbol;
- (BOOL)_hasSetCurrencySymbol;
- (void)setCurrencySymbol:;
- (id)internationalCurrencySymbol;
- (void)setInternationalCurrencySymbol:;
- (BOOL)_hasSetInternationalCurrencySymbol;
- (id)percentSymbol;
- (void)setPercentSymbol:;
- (id)perMillSymbol;
- (void)setPerMillSymbol:;
- (id)minusSign;
- (void)setMinusSign:;
- (id)plusSign;
- (void)setPlusSign:;
- (id)exponentSymbol;
- (void)setExponentSymbol:;
- (unsigned long long)groupingSize;
- (void)setGroupingSize:;
- (unsigned long long)secondaryGroupingSize;
- (void)setSecondaryGroupingSize:;
- (unsigned long long)formatWidth;
- (void)setFormatWidth:;
- (id)paddingCharacter;
- (void)setPaddingCharacter:;
- (unsigned long long)paddingPosition;
- (void)setPaddingPosition:;
- (void)setRoundingMode:;
- (id)roundingIncrement;
- (void)setRoundingIncrement:;
- (unsigned long long)minimumIntegerDigits;
- (void)setMinimumIntegerDigits:;
- (unsigned long long)maximumIntegerDigits;
- (void)setMaximumIntegerDigits:;
- (id)currencyGroupingSeparator;
- (void)setCurrencyGroupingSeparator:;
- (BOOL)usesSignificantDigits;
- (void)setUsesSignificantDigits:;
- (unsigned long long)minimumSignificantDigits;
- (void)setMinimumSignificantDigits:;
- (unsigned long long)maximumSignificantDigits;
- (void)setMaximumSignificantDigits:;
- (BOOL)isPartialStringValidationEnabled;
- (void)setPartialStringValidationEnabled:;
- (id)getFormatter;
- (void)setPropertyBit;
- (void)clearPropertyBit;
- (BOOL)checkModify;
- (void)resetCheckModify;
- (void)resetCheckLocaleChange;
- (BOOL)checkLocaleChange;
+ (id)pkaxLocalizedUnsignedInteger:;
+ (id)pkaxLocalizedDouble:;
+ (id)pkaxLocalizedDouble:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)pkaxLocalizedPercentage:;
+ (id)pkaxLocalizedPercentage:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)pkaxLocalizedNumber:;
+ (id)pkaxLocalizedNumber:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)pkaxLocalizedNumber:numberStyle:;
+ (id)pkaxLocalizedNumber:numberStyle:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)ef_formatUnsignedInteger:withGrouping:;
+ (id)ef_formatInteger:withGrouping:;
+ (id)dcaxLocalizedUnsignedInteger:;
+ (id)dcaxLocalizedDouble:;
+ (id)dcaxLocalizedDouble:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)dcaxLocalizedPercentage:;
+ (id)dcaxLocalizedPercentage:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)dcaxLocalizedNumber:;
+ (id)dcaxLocalizedNumber:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)dcaxLocalizedNumber:numberStyle:;
+ (id)dcaxLocalizedNumber:numberStyle:maximumNumberOfDigitsAfterDecimalSeparator:;
+ (id)stringFromFileSize:;
+ (id)stringFromHugeNumber:;
+ (unsigned long long)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:;
+ (id)localizedStringFromNumber:numberStyle:;
@end
