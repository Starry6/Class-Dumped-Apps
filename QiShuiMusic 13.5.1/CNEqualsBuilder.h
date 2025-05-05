@interface CNEqualsBuilder : NSObject
+ (BOOL)isObject:equalToOther:;
+ (BOOL)isObject:memberOfClass:andEqualToObject:withBlocks:;
+ (BOOL)isObject:memberOfSameClassAndEqualTo:withBlocks:;
+ (BOOL)isDouble:equalToOther:withAccuracy:;
+ (BOOL)isObject:equalToOther:withBlocks:;
+ (BOOL)evaluateBuilderBlock:remainingBlocks:;
+ (BOOL)isObject:kindOfClass:andEqualToObject:withBlocks:;
+ (BOOL)isBool:equalToOther:;
+ (BOOL)isString:localizedCaseInsensitiveEqualToOther:;
+ (BOOL)isInteger:equalToOther:;
@end
