@interface AWETextTemplateCategoryCell : AWETextTemplateCategoryBaseCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCategoryModel:;
- (void)categoryDidUpdate;
- (void)executeTwinkleAnimation;
- (void)configIconImageWithCategoryModel:showYellowDot:;
- (void)configWithCollectionImage;
- (id)titleLabelSizeWithTitle:height:;
- (id)accessibilityLabel;
- (void)animationDidStop:finished:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:;
- (BOOL)isAccessibilityElement;
- (void)accessibilityElementDidBecomeFocused;
- (void)setupSubviews;
@end
