@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch
- (BOOL)isTopHit;
- (id)parsecDomainIdentifier;
- (BOOL)shouldPreload;
- (id)initWithBookmarkAndHistoryCompletionMatch:userInput:forQueryID:shouldPreload:;
@end
