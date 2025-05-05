@interface BDXSettings : NSObject
+ (id)arrayForKeyPath:defaultValue:;
+ (id)bdxVersion;
+ (BOOL)boolForKeyPath:defaultValue:;
+ (id)dictionaryForKeyPath:defaultValue:;
+ (double)doubleValueForKeyPath:defaultValue:;
+ (long long)intForKeyPath:defaultValue:;
+ (id)objectForKeyPath:;
+ (id)stringForKeyPath:defaultValue:;
@end
