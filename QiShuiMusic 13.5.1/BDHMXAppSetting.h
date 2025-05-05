@interface BDHMXAppSetting : NSObject
+ (id)arrayValueForKey:defaultVal:;
+ (BOOL)boolValueForKey:defaultVal:;
+ (id)dictionaryValueForKey:defaultVal:;
+ (double)doubleValueForKey:defaultVal:;
+ (double)floatValueForKey:defaultVal:;
+ (long long)integerValueForKey:defaultVal:;
+ (id)objectForKeyPath:;
+ (id)stringValueForKey:defaultVal:;
@end
