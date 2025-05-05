@interface AWEIMMsgStateView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel textLabel;
- (void)addRotateAnimation;
- (void)addSubviews;
- (void)configWithModel:;
- (void)removeRotateAnimation;
- (id)textLabel;
- (void)commonInit;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setTextLabel:;
- (void)setIconImageView:;
@end
