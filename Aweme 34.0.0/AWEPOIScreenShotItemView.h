@interface AWEPOIScreenShotItemView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? actionBlock;
- (void)onTapView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setActionBlock:;
- (id)actionBlock;
+ (id)itemWithTitle:image:action:;
@end
