@interface PIASwitchFunctionPlugin : NSObject
+ (id)switchKey:type:;
+ (BOOL)ifPageURLExist:;
+ (BOOL)checkFunctionEnable:ForURL:originURL:;
+ (BOOL)checkURLInBlockList:;
+ (BOOL)checkURLMatchPIA:;
+ (void)executeAfterPrepareTask;
+ (void)fetchSetting:;
+ (id)functionMap;
+ (BOOL)getBaseSwitchValueForKey:;
+ (id)getPageConfigForKey:;
+ (void)injectSettingBridgeWithContext:instance:;
+ (BOOL)isFunctionCanBeUsed:URL:scene:;
+ (BOOL)isFunctionCanBeUsed:URL:scene:completion:;
+ (BOOL)isURLEnabled:function:scene:;
+ (BOOL)isURLInAllowDomainList:;
+ (void)p_setFunctionKey;
+ (void)registerFunctionDefaultSwitch:enabled:type:;
+ (id)switchStorage;
+ (id)tryFetchSettingsKeyIfNeed:;
+ (id)urlAllowList;
+ (id)urlCache;
@end
