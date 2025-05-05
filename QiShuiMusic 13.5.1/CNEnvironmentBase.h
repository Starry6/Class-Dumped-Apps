@interface CNEnvironmentBase : NSObject
- (void)resignCurrent;
- (void).cxx_destruct;
- (void)becomeCurrent;
+ (id)currentEnvironment;
+ (id)defaultEnvironment;
+ (char *)environmentStackKey;
+ (id)defaultStack;
+ (id)currentEnvironmentForKey:;
+ (id)effectiveReadingStackForKey:;
+ (id)effectiveWritingStackForKey:;
@end
