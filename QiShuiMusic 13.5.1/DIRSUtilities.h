@interface DIRSUtilities : NSObject
+ (id)dateParser:;
+ (id)ensureDirectory:;
+ (BOOL)isArray:isEqualTo:;
+ (BOOL)isDictionary:isEqualTo:;
+ (BOOL)isObject:isEqualTo:;
+ (void)measureExecution:completion:;
+ (id)timeParser:;
+ (id)rootDirectory;
@end
