@interface AWEIMMessageTabOptPushBannerView : UIView
@property (nonatomic) UIView backColorView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) @? tapAction;
@property (nonatomic) @? closeAction;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)closeBtnTapped:;
- (void)refreshWithContent:highlightText:;
- (void)bannerViewTapped;
- (id)backColorView;
- (id)makeAttrStringWithContent:highlight:;
- (void)setBackColorView:;
- (void)setCloseAction:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)closeAction;
- (void)layoutSubviews;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)tapAction;
- (void)setTapAction:;
@end
