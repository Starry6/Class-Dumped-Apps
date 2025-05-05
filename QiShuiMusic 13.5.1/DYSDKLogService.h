@interface DYSDKLogService : NSObject
+ (Class)logImplClass;
+ (void)logWithLevel:tag:fileName:funcName:line:content:;
+ (void)setLogServiceImpl:;
@end
