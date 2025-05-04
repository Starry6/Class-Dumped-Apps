@interface AWECoverChooseBottomTitleCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView bottomView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel label;
- (void)updateWithObject:selected:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (id)iconView;
- (id)label;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)bottomView;
- (void)p_init;
@end
