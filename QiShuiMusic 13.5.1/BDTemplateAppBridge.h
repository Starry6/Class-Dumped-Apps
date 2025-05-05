@interface BDTemplateAppBridge : TTBridgePlugin
- (void)appTemplateClearCacheWithParam:callback:engine:controller:;
+ (id)sharedPlugin;
+ (unsigned long long)authType;
+ (unsigned long long)instanceType;
@end
