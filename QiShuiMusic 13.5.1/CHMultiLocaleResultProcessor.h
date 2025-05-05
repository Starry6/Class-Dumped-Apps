@interface CHMultiLocaleResultProcessor : NSObject
+ (void)updateMultiLocaleResultDictionary:locales:;
+ (id)swapMultiLocaleResults:locales:topLocaleIndex:resultHasSwap:resultTopLocale:;
+ (id)combineMultiLocaleResults:locales:topLocaleIndex:mergedResultPostprocessingBlock:changeableColumnCountBlock:;
@end
