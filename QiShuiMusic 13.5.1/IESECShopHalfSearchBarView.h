@interface IESECShopHalfSearchBarView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
- (void)resetColors;
- (void)scrollToPercent:;
- (void)switchTheme:;
- (void)updateColor:bgEndColor:iconStartColor:iconEndColor:textStartColor:textEndColor:;
- (id)textLabel;
- (id)iconView;
- (void)setIconView:;
- (void)setText:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupViews;
@end
