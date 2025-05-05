@interface TIAnalyticsUtil : NSObject
+ (BOOL)isFloat:;
+ (BOOL)isNumber:;
+ (id)indexesForValidRatiosInArray:;
+ (BOOL)isString:;
+ (int)computeCommonExtentForArrays:;
+ (id)roundCount:toSignificantDigits:;
+ (id)createStringByReplacingStylizedQuotesToStraightQuotes:;
+ (BOOL)isInteger:;
+ (BOOL)isBoolean:;
+ (BOOL)isStylizedString:equalToString:;
+ (id)bucketRatioWithValue:bucketCount:;
+ (id)bucketPercentageWithValue:;
+ (id)bucketNumber:bucketThresholds:bucketValues:;
+ (BOOL)isDictionary:;
+ (id)bucketPercentageWithNumerator:andDenominator:;
+ (id)roundNumber:toSignificantDigits:;
+ (BOOL)hasNonWhitespaceNonPunctuationText:;
+ (id)toFloat:;
+ (id)bucketPercentageWithNumber:;
+ (BOOL)isArray:;
+ (id)bucketRatioWithNumerator:andDenominator:bucketCount:;
+ (id)bucketRatioWithNumber:bucketCount:;
+ (id)constrainInteger:toMinimum:andMaximum:;
+ (id)toInteger:;
@end
