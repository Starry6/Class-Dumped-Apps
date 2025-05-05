@interface PPSocialHighlightStore : NSObject
- (id)init;
- (void)feedbackForAttributionIdentifier:type:client:variant:completion:;
- (BOOL)iterRankedHighlightsWithLimit:client:variant:error:block:;
- (BOOL)iterRankedCollaborationsWithLimit:client:variant:error:block:;
- (void)feedbackForHighlightResourceURL:resolvedURL:type:client:variant:completion:;
- (BOOL)iterRankedHighlightsForSyncedItems:client:variant:error:block:;
- (void)feedbackForHighlightIdentifier:type:client:variant:completion:;
- (id)attributionForIdentifier:error:;
+ (double)decayInterval;
@end
