@interface AWESECAppJumpAppLinkSettings : NSObject
+ (BOOL)applinkMonitorEnabled;
+ (long long)possibleSampleRate;
+ (id)applinkAllowDomains;
+ (id)applinkEnableRuleList;
+ (BOOL)applinkStrictModeEnabledByRules;
+ (id)applinkStrictModeEnableRuleList;
+ (BOOL)applinkStrictModeEnabled;
+ (id)applinkSettings;
@end
