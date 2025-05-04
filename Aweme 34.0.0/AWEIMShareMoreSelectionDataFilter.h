@interface AWEIMShareMoreSelectionDataFilter : NSObject
@property (nonatomic) IESIMShareMoreSelectionContext listContext;
- (void)setListContext:;
- (id)listContext;
- (id)p_filterGroupIfNeeded:;
- (id)p_filterBAccountUserIfNeeded:;
- (id)p_filterFansGroupIfNeeded:;
- (id)p_filterFriensAndNormalGroupIfNeeded:;
- (id)p_filterNotFollowStatusFriendsIfNeeded:;
- (id)p_filterSelfIfNeeded:;
- (id)p_filterSomeGroupIfNeeded:;
- (id)p_filterPulicGroupIfNeeded:;
- (id)p_filterRecentShareAndRecentChatDataWithShareLists:;
- (id)p_filterMyFollowDataWithShareLists:;
- (id)p_filterEmptyItemIfNeeded:;
- (id)p_filterExclusionItemIfNeeded:;
- (id)p_filterGroupFilterNotParticipantOrDissolve:;
- (id)p_filterSelfForGameIncentiveIfNeeded:;
- (id)p_filterExchangeIfNeeded:;
- (id)filterWithFilterType:models:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
