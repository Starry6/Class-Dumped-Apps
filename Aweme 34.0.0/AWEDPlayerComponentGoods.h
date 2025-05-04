@interface AWEDPlayerComponentGoods : AWEDPlayerBaseComponent
@property (nonatomic) <AWEPlayGoodsBackgroundVideoManagerInterface> playGoodsBackgroundVideoManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:didChangePlaybackStateWithAction:;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (void)updatePlayerController:withPlayVideoVC:;
- (void)updateLoadingViewForGoodsVideo;
- (void)prepareToPlayGoodsBackgroundVideo;
- (void)updatePlayerViewCornerRadiusForGoodsVideo;
- (id)playGoodsBackgroundVideoManager;
- (id)goodsVideoPlayerFrame;
- (void)setPlayGoodsBackgroundVideoManager:;
- (void)viewWillLayoutSubviews;
- (void)prepareForDisplay;
- (void).cxx_destruct;
@end
