@interface IESLiveSaaSGuideSettingCellItemView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) IESLiveSaaSImageTextView button;
@property (nonatomic) UISwitch sw;
@property (nonatomic) UIView dotView;
@property (nonatomic) @? onShow;
- (id)onShow;
- (void)refreshPartWithCellItem:panelStyle:;
- (void)setOnShow:;
- (void)setSw:;
- (id)sw;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (id)button;
- (void).cxx_destruct;
- (void)setButton:;
- (id)titleLabel;
- (id)tipLabel;
- (void)setTipLabel:;
- (id)dotView;
- (void)setDotView:;
- (void)setupSubviews;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
