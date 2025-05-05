@interface PIAFunctionPluginSwitch : NSObject
+ (id)switchKey:type:;
+ (BOOL)getFunctionSwitchValueForKey:URL:scene:;
+ (BOOL)isFunctionCanBeUsed:URL:scene:;
+ (BOOL)isURLEnabled:function:scene:;
+ (BOOL)isURLInAllowDomainList:;
+ (BOOL)isURLInAllowDomainList:function:scene:;
+ (BOOL)isURLInBlockDomainPathList:function:scene:;
+ (BOOL)isURLInDenyDomainList:;
+ (void)registerFunctionDefaultSwitch:enabled:allowDomain:blockDomainPath:;
@end
