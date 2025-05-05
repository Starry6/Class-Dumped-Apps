@interface VNSuggestionsLogger : VNClusteringLogger
- (id)initWithOptions:logEnabled:;
- (void)logString:;
- (void)logInputFaceIdsWithFlags:;
- (void)logSuggestons:description:;
- (void)logAllSuggestons:;
- (void)logFilteredByInputQuerySuggestons:;
- (void)logConnectedGroups:;
- (void)logFinalSuggestionsList:;
@end
