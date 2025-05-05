@interface TRICKServerEnvironmentReader : NSObject
+ (long long)currentEnvironment;
+ (long long)validatedEnvironmentFromNumber:;
@end
