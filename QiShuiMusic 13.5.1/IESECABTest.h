@interface IESECABTest : NSObject
+ (id)hostCompatibleDictionaryForKey:defaultValue:;
+ (long long)hostCompatibleIntegerForKey:defaultValue:;
+ (id)hostCompatibleStringForKey:defaultValue:;
+ (id)hostCompatibleValueForKey:defaultValue:;
+ (id)valueForKey:defaultValue:;
+ (id)valueForKey:forceExpose:defaultValue:;
+ (id)dictionaryForKey:defaultValue:;
+ (id)numberForKey:defaultValue:;
+ (id)stringForKey:defaultValue:;
+ (BOOL)boolForKey:defaultValue:;
+ (long long)integerForKey:defaultValue:;
+ (double)doubleForKey:defaultValue:;
+ (id)arrayForKey:defaultValue:;
@end
