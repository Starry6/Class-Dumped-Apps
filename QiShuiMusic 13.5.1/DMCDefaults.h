@interface DMCDefaults : NSObject
+ (id)objectForDefaultsKey:;
+ (id)dictForDefaultsKey:;
+ (id)numberForDefaultsKey:;
+ (BOOL)boolForDefaultsKey:;
+ (id)stringForDefaultsKey:;
+ (BOOL)ESSOTestModeEnabled;
@end
