@interface AWEMainFrameFormatLogger : NSObject
+ (void)logWithLevel:moduleName:subModuleName:where:what:extra:;
+ (BOOL)enableFormatLog;
+ (BOOL)enableMultiInstanceLog;
+ (BOOL)useDefaultWhenDowngrade;
+ (id)instanceName;
@end
