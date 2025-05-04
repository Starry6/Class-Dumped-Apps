@interface AWEIMSkylightListFoldExpandView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
- (void)p_setupUI;
- (void)refreshWithText:isFolded:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
