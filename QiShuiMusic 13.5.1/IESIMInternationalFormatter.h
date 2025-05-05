@interface IESIMInternationalFormatter : NSObject
+ (id)formatedNumber:;
+ (long long)comparisonAfterRoundingWithNumberA:numberB:scale:;
+ (id)dateFormatterGregorian;
+ (id)dateFormatterJapanese;
+ (void)forceFormatterUseArabicNumerals:;
+ (id)formatedDate:;
+ (id)formatedFloat:digit:;
+ (id)formatedJapaneseDate:;
+ (id)formatedLargeNumber:;
+ (id)formatedLargeNumber:shortVersion:;
+ (id)formatedNumber:policy:;
+ (id)formatedNumber:policy:shortVersion:;
+ (long long)roundUpDownNumber:;
+ (id)numberWithFloat:;
@end
