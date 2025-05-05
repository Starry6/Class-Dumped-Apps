@interface NPSDomainAccessorUtils : NSObject
+ (id)dataForObject:;
+ (id)stringForObject:;
+ (id)arrayForObject:;
+ (id)dictionaryForObject:;
+ (id)stringArrayForObject:;
+ (long long)integerForObject:existsAndHasValidFormat:;
+ (long long)longForObject:existsAndHasValidFormat:;
+ (float)floatForObject:existsAndHasValidFormat:;
+ (double)doubleForObject:existsAndHasValidFormat:;
+ (BOOL)boolForObject:existsAndHasValidFormat:;
+ (id)URLForObject:;
+ (id)objectForURL:;
@end
