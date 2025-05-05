@interface SFSuggestedUserProvider : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreChangedNotification:;
- (void)suggestedUsersOfType:matchingText:completionHandler:;
- (void)suggestedUsersOfType:completionHandler:;
- (id)_allCachedSuggestedUsersWithType:;
- (id)_cachedSuggestedUsersWithType:matchingText:;
- (void)_getSuggestedUsersFromSavedAccounts:suggestedEmails:suggestedNonEmails:;
+ (id)sharedProvider;
@end
