@interface AWEPlayInteractionVSFormatTagView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UILabel tagLabel;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)pinkGradientBgLabelWithFrame:;
- (id)blueGradientBgLabelWithFrame:;
- (id)purpleGradientBgLabelWithFrame:;
- (id)gradientBgLabelWithFrame:startColor:endColor:;
- (void)updateWithTagType:isPaid:;
- (id)accessibilityLabel;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)reloadLayout;
- (void)setGradientLayer:;
@end
