@interface BNSceneContract.BNSearchVCParam : BNCommonAdapter.BNRouteBasicParam
@property (nonatomic) NSString query;
@property (nonatomic) double customRightMargin;
@property (nonatomic) BOOL forPodcast;
@property (nonatomic) BOOL transitionWithoutSearchBar;
- (double)customRightMargin;
- (BOOL)forPodcast;
- (void)setCustomRightMargin:;
- (void)setForPodcast:;
- (void)setTransitionWithoutSearchBar:;
- (BOOL)transitionWithoutSearchBar;
- (id)init;
- (void)setQuery:;
- (id)query;
- (void).cxx_destruct;
@end
