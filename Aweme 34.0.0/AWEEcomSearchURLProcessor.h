@interface AWEEcomSearchURLProcessor : NSObject
+ (id)firstMatchInString:withPattern:;
+ (id)remakeImageURL:withConfig:;
+ (BOOL)matchURLString:withRegexPatterns:;
@end
