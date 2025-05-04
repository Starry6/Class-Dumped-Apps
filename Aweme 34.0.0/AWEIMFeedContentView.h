@interface AWEIMFeedContentView : UIView
@property (nonatomic) @? tapAction;
@property (nonatomic) AWEIMShareFeedCardView cardView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) BOOL enableAvatarClickAction;
- (void)showLoading:;
- (void)p_coverDidTapped:;
- (BOOL)enableAvatarClickAction;
- (void)setEnableAvatarClickAction:;
- (id)init;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setTapGesture:;
- (id)cardView;
- (void)setCardView:;
- (id)tapAction;
- (void)setTapAction:;
@end
