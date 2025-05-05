@interface IESECStoreHeaderLiveView : UIView
@property (nonatomic) UIView<IESECLivePlayer> livePlayerView;
@property (nonatomic) IESECStoreLiveHeaderLiveInfoView liveInfoView;
@property (nonatomic) Q loadState;
@property (nonatomic) double livePlayerBottomOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveInfoView;
- (double)livePlayerBottomOffset;
- (id)livePlayerView;
- (void)player:loadStateDidChange:;
- (void)setLiveInfoView:;
- (void)setLivePlayerBottomOffset:;
- (void)setLivePlayerView:;
- (void)didMoveToSuperview;
- (unsigned long long)loadState;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
- (void)setLoadState:;
@end
