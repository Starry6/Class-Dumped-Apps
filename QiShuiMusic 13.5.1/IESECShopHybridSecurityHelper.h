@interface IESECShopHybridSecurityHelper : NSObject
+ (id)configVersionForTab:;
+ (BOOL)containISVComponentForTab:;
+ (void)enableSecurityCheckForTab:puzzleContext:JSBMonitor:;
+ (BOOL)matchRegex:paramsValue:;
+ (id)objectForKeyPath:dict:;
+ (void)reportSecurityCheckLocalErr:securityConfig:verifyMode:errorCode:errorDesc:schema:;
+ (void)reportSecurityCheckResult:securityConfig:verifyMode:failedCode:limitParamKey:limitParamValue:schema:;
+ (BOOL)securityCheckForJSBName:params:schema:securityConfig:JSBMonitor:;
+ (id)securityConfig;
+ (id)securityConfigForTabType:;
+ (id)securitySwitch;
+ (id)trackingQueue;
@end
