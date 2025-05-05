@interface WBSURLCompletionSessionProxy : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)getBestMatchesForTypedString:limit:forQueryID:withSearchParameters:completionHandler:;
- (void)_completionSessionWithCompletionHandler:;
- (void)userDidSelectCompletionMatch:forTypedString:;
@end
