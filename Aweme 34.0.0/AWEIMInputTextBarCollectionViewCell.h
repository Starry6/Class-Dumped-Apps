@interface AWEIMInputTextBarCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UILabel titleLabel;
- (void)p_createComponents;
- (void)renderWithViewModel:;
- (void)p_layoutComponents;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
+ (id)identifier;
@end
