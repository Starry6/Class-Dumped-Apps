@interface MFComposeActionCardTitleView : _UINavigationBarTitleView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)closeButton;
- (void)_updateHeightForCurrentTraits;
+ (double)heightForTraitCollection:;
@end
