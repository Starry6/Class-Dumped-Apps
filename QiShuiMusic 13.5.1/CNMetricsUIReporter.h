@interface CNMetricsUIReporter : CNMetricsReporter
- (id)emptyDictionaryForAction:andApplication:;
- (void)logActionDictionary:;
- (void)logContactShownforApplication:;
- (void)logSearchResultsFetchedforApplication:fromSuggestions:;
- (void)logSearchResultsSelectedforApplication:fromSuggestions:;
- (void)logSearchUsageforApplication:;
- (id)eventKeyPrefix;
- (void)logSearchActionWithDictionary:;
@end
