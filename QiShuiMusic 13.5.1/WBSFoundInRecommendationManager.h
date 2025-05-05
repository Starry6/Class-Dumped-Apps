@interface WBSFoundInRecommendationManager : NSObject
- (void).cxx_destruct;
- (void)_createInternalQueueIfNecessary;
- (void)beginListeningForURLSuggestionChanges;
- (void)stopListeningForURLSuggestionChanges;
- (void)recentRecommendationsWithCompletionHandler:;
- (void)_recentURLRecommendationsWithCompletionHandler:;
+ (id)_linkRecommendationsFromSGSuggestions:contactStoreProvider:;
+ (unsigned long long)foundInSourceFromBundleIdentifier:;
+ (BOOL)isBundleIdentifierFromCalendar:;
+ (BOOL)isBundleIdentifierFromMessages:;
@end
