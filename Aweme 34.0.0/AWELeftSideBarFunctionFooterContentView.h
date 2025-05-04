@interface AWELeftSideBarFunctionFooterContentView : UIView
@property (nonatomic) DUXBaseImageView iconImageView;
@property (nonatomic) UILabel label;
@property (nonatomic) DUXBadge dotBadge;
@property (nonatomic) q viewStyle;
- (void)initLabel;
- (void)initView;
- (id)dotBadge;
- (void)setDotBadge:;
- (void)updateIconImageWithUrl:;
- (void)updateViewStyle:;
- (void)initIconImageView;
- (void)initBadge;
- (void)setLabel:;
- (long long)viewStyle;
- (id)initWithFrame:;
- (id)label;
- (id)sizeThatFits:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconImageView:;
- (void)setBadgeHidden:;
- (void)updateLabelText:;
+ (id)labelFontWithViewStyle:;
+ (double)imageLenWithViewStyle:;
+ (double)heightWithViewStyle:;
@end
