@interface AWEElderModeContentItemView : UIView
@property (nonatomic) UIImage iconImg;
@property (nonatomic) NSString text;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
- (id)iconImg;
- (void)setIconImg:;
- (id)initWithImage:andText:;
- (id)textLabel;
- (void)setText:;
- (id)iconView;
- (id)text;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
@end
