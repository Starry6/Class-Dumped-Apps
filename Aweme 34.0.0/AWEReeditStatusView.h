@interface AWEReeditStatusView : UIView
@property (nonatomic) UIButton reeditButton;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel descrLabel;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) @? onTapReedit;
- (id)aweme;
- (void)setAweme:;
- (id)onTapReedit;
- (void)setOnTapReedit:;
- (id)descrLabel;
- (id)reeditButton;
- (void)onTapReedit:;
- (void)setReeditButton:;
- (void)setDescrLabel:;
- (id)init;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setIconImageView:;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
