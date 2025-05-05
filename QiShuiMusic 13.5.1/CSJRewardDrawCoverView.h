@interface CSJRewardDrawCoverView : CSJCoverView
@property (nonatomic) UIView playerView;
@property (nonatomic) CSJRewardedVideoDownloadBarView downloadView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)downloadBarTapped:extraDic:;
- (void)downloadButtonTapped:extraDic:;
- (void)pbu_override_buildView;
- (id)playerViewContainerView;
- (void)setPlayerView:;
- (void).cxx_destruct;
- (id)playerView;
- (void)setDownloadView:;
- (id)downloadView;
@end
