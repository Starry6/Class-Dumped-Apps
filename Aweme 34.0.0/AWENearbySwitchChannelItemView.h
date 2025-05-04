@interface AWENearbySwitchChannelItemView : UIView
@property (nonatomic) UILabel title;
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) UIImageView rightIconView;
- (id)leftIconView;
- (void)setLeftIconView:;
- (id)rightIconView;
- (void)setRightIconView:;
- (void)updateTitle:textColor:leftIcon:rightIcon:feedType:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setupUI;
@end
