@interface WBSParsecHiddenResultInfo : NSObject
@property (nonatomic) WBSParsecSearchResult hiddenResult;
@property (nonatomic) <WBSCompletionListItem> preferredCompletionListItem;
@property (nonatomic) q reasonForHidingResult;
@property (nonatomic) Q preferredCompletionListItemPositionInCompletionList;
@property (nonatomic) Q preferredCompletionListItemPositionInFrequentlyVisitedSites;
@property (nonatomic) NSDictionary feedbackDictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithHiddenResult:preferredCompletionListItem:reason:;
- (id)feedbackDictionaryRepresentation;
- (id)hiddenResult;
- (id)preferredCompletionListItem;
- (long long)reasonForHidingResult;
- (unsigned long long)preferredCompletionListItemPositionInCompletionList;
- (void)setPreferredCompletionListItemPositionInCompletionList:;
- (unsigned long long)preferredCompletionListItemPositionInFrequentlyVisitedSites;
- (void)setPreferredCompletionListItemPositionInFrequentlyVisitedSites:;
@end
