@interface AWETeenFeedControllerManager : AWEShellControllerManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (void)beginLoadMore;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)playerWillLoopPlayingWithAwemeID:videoID:currentTime:;
- (void)syncPlayTimeWithAwemeModel:playedDuration:totalDuration:;
- (void)beginRequestDataFromRefresh:;
- (void)endRequestDataSuccess:error:fromRefresh:;
- (void)triggerSearchAction:;
- (void)play;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)scrollViewDidScroll:;
@end
