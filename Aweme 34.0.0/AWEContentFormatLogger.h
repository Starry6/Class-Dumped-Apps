@interface AWEContentFormatLogger : NSObject
+ (void)logWithLevel:moduleType:subModuleType:where:what:extra:;
+ (void)logWithLevel:useMultiInstance:moduleType:subModuleType:where:what:extra:;
+ (id)moduleNameWithModuleType:;
+ (id)subModuleNameWithModuleType:;
+ (void)logWithLevel:useMultiInstance:moduleName:subModuleName:where:what:extra:;
+ (void)logWithLevel:logInstanceName:moduleName:subModuleName:where:what:extra:;
@end
