@interface AWEPlayInteractionRecommendFollowViewModel : AWEPlayInteractionPersonElementViewModel
- (void)trackInteractionRecommendFollowEventWithEvent:extraParams:;
- (void)onInteractionRecommendFollowClicked;
- (void)reqeustUnfollow;
- (void)reqeustFollow;
- (long long)p_praPageTypeFromFriendRecommend:;
- (void)autoShowRecommendCard;
- (void)onDislikeButtonClicked;
- (void)onUninterestButtonClicked;
- (void)requestFollowWithFriend;
@end
