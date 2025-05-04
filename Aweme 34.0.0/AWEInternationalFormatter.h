@interface AWEInternationalFormatter : NSObject
+ (id)formatedNumber:;
+ (id)formatedNumberToTenThousandCh:;
+ (id)formatedLargeNumber:;
+ (id)formatedNumber:policy:;
+ (id)formatedLargeNumber:shortVersion:;
+ (long long)comparisonAfterRoundingWithNumberA:numberB:scale:;
+ (id)formatedNumber:policy:shortVersion:;
+ (long long)roundUpDownNumber:;
+ (id)dateFormatterGregorian;
+ (id)dateFormatterJapanese;
+ (void)forceFormatterUseArabicNumerals:;
+ (id)formatedDate:;
+ (id)formatedJapaneseDate:;
+ (id)formatedFloat:digit:;
+ (id)numberWithFloat:;
@end
