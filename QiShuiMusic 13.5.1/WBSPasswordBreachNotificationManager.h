@interface WBSPasswordBreachNotificationManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)addBreachNotificationForSavedAccounts:withCompletionHandler:;
- (id)_contentWithSavedAccounts:topFraudTargets:;
- (id)_titleForSavedAccounts:;
+ (id)_bodyForSavedAccounts:withTopFraudTargets:;
+ (unsigned long long)_bodyStyleForTopFraudTargetDomains:sensitiveDomains:passwordsCount:;
+ (BOOL)_highLevelDomain:isIncludedInTopFraudTargets:;
+ (id)_bodyForHighLevelDomains:deviceClass:topFraudTargets:;
@end
