@interface AWEIMInputActionBarFAQCollectionViewCell : UICollectionViewCell
@property (nonatomic) BOOL filled;
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIVisualEffectView blurView;
- (void)addBlurView;
- (void)p_setupViews;
- (BOOL)isLightStyle;
- (void)setIsLightStyle:;
- (void)removeBlurView;
- (void)__refreshBasicUI;
- (void)configCell:isLightColor:;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)isFilled;
- (void)setFilled:;
+ (id)itemSize:;
@end
