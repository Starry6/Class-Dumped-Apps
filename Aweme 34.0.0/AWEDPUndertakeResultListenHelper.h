@interface AWEDPUndertakeResultListenHelper : NSObject
+ (id)rulesForURL:;
+ (BOOL)checkIfUndertakeSuccessWithEvent:params:ruleModel:openURL:;
+ (id)ruleList;
@end
