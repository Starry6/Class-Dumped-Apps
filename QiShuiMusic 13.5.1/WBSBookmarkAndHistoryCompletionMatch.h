@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch
@property (nonatomic) <WBSURLCompletionMatchData> data;
@property (nonatomic) float weight;
- (float)weight;
- (id)data;
- (id)title;
- (void).cxx_destruct;
- (id)userVisibleURLString;
- (long long)visitCountScore;
- (id).cxx_construct;
- (id)originalURLString;
- (id)initWithBookmarkAndHistoryCompletionMatch:userInput:forQueryID:;
- (BOOL)containsBookmark;
- (id)parsecDomainIdentifier;
- (float)topSitesScore;
@end
