@interface AWEIMMsgTabPrivateMsgTipBanner : UIView
@property (nonatomic) UIView backColorView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) YYLabel subtitleLabel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) @? closeAction;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)closeBtnTapped:;
- (id)backColorView;
- (void)setBackColorView:;
- (void)refreshWithTitle:subtitle:closeAction:;
- (void)setCloseAction:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)closeAction;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (void)setupUI;
+ (double)bannerViewHeight;
+ (id)makeAttrString:highlight:tapAction:;
@end
