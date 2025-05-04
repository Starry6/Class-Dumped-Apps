@interface AWEComposerBeautySwitchCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel switchLabel;
@property (nonatomic) UIView switchIconView;
@property (nonatomic) UIView separatorLineView;
@property (nonatomic) UIImageView iconImageView;
- (id)switchLabel;
- (void)setSwitchLabel:;
- (void)updateSwitchViewIfIsOn:;
- (id)switchIconView;
- (void)setSwitchIconView:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setIconImageView:;
- (void)setupUI;
- (id)separatorLineView;
- (void)setSeparatorLineView:;
@end
