@interface AWEIMJoinGroupApplyNewStyleNoticeView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) UIView rightIconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEIMTopNoticeTipViewConfig config;
@property (nonatomic) @? actionClickBlock;
- (void)updateBackgroundColorAfterAppUserInterfaceStyleDidChanged;
- (id)leftIconView;
- (void)setLeftIconView:;
- (id)rightIconView;
- (void)setRightIconView:;
- (void)setActionClickBlock:;
- (id)actionClickBlock;
- (void)onClickBannerView;
- (void)initBannerSubView;
- (void)addBannerSubView;
- (void)updateTipViewWithConfig:;
- (void)setConfig:;
- (void)dealloc;
- (id)config;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)titleLabel;
@end
