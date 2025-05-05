@interface IESECTabKitSecurityHelper : NSObject
+ (BOOL)p_matchRegex:value:;
+ (id)p_securityConfigs;
+ (void)reportSecurityCheckResult:ruleType:verifyMode:version:;
+ (BOOL)securityCheckForAnchorUrl:;
+ (BOOL)securityCheckForApiUrl:;
+ (BOOL)securityCheckForUrl:ruleType:;
@end
