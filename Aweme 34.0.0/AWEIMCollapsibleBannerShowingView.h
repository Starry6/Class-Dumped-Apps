@interface AWEIMCollapsibleBannerShowingView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView containerContentView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UIButton removeBtn;
@property (nonatomic) UIView removeBtnMaskView;
@property (nonatomic) q tailType;
@property (nonatomic) double imChatFontScale;
@property (nonatomic) double duxFontScale;
@property (nonatomic) BOOL adaptToBigFont;
@property (nonatomic) AWEIMCollapsibleBannerViewModel viewModel;
@property (nonatomic) <AWEIMCollapsibleBannerShowingViewDelegate> delegate;
- (void)awe_themeWillChange:;
- (void)configWithViewModel:;
- (void)didClickView;
- (long long)tailType;
- (id)removeBtn;
- (id)removeBtnMaskView;
- (void)setTailType:;
- (void)__updateTailType:;
- (void)__updateShadowLayer;
- (void)__didTapRemove;
- (void)setRemoveBtn:;
- (void)setRemoveBtnMaskView:;
- (void)__setupLayout;
- (double)__sizeInBigFont:;
- (void)__changeContainerColorWithThemeStyle:;
- (BOOL)adaptToBigFont;
- (double)duxFontScale;
- (double)imChatFontScale;
- (void)updateLayoutForPadSplitting;
- (void)resetForReuse;
- (void)setImChatFontScale:;
- (void)setDuxFontScale:;
- (void)setAdaptToBigFont:;
- (id)init;
- (id)delegate;
- (id)viewModel;
- (id)containerView;
- (id)iconView;
- (void)setContainerView:;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)containerContentView;
- (void)setContainerContentView:;
- (id)arrow;
- (void)setArrow:;
@end
