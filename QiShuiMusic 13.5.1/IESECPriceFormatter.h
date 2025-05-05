@interface IESECPriceFormatter : NSObject
+ (id)_convertFenToYuan:;
+ (BOOL)hasGapBetweenMinPrice:andMaxPrice:;
+ (id)priceAttributedString:integerFont:decimalFont:;
+ (id)priceAttributedString:integerFont:decimalFont:decimalPlaces:roundingMode:;
+ (id)stringWithPrice:;
+ (id)stringWithPrice:decimalPlaces:roundingMode:;
@end
