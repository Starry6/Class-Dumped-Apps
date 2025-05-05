@interface TMRuleEngineDefaultParamterCenter : NSObject
+ (void)__registerCurrentPasteboardChangeCount;
+ (void)_registerAutoReadPasteboard;
+ (void)_registerBasicMode;
+ (void)_registerPrivacyAgree;
+ (void)_registerSilentMode;
+ (void)_registerSilentModeDuration;
+ (void)_registerTeenMode;
+ (BOOL)enableListenParameter;
+ (void)registerDefaultParams;
+ (id)ruleEngineConfig;
+ (id)sharedInstance;
@end
