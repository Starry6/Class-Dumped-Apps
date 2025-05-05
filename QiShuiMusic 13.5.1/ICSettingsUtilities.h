@interface ICSettingsUtilities : NSObject
+ (void)setObject:forKey:;
+ (void)registerDefaults:;
+ (void)setBool:forKey:;
+ (BOOL)boolForKey:;
+ (id)objectForKey:;
@end
