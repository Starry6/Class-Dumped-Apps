@interface AWELiveCardTopInfoTagView : UIView
@property (nonatomic) UILabel firstLabel;
@property (nonatomic) UILabel secondLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIView translucentBackgroundView;
- (id)tagLabel;
- (id)pinkGradientBgLabelWithFrame:;
- (id)blueGradientBgLabelWithFrame:;
- (id)purpleGradientBgLabelWithFrame:;
- (id)gradientBgLabelWithFrame:startColor:endColor:;
- (void)updateWithFirstTitle:secondTitle:tagType:;
- (id)translucentBackgroundViewWithFrame:;
- (void)setTranslucentBackgroundView:;
- (id)gradientLayerWithFrame:tagType:;
- (id)translucentBackgroundView;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setSecondLabel:;
- (id)firstLabel;
- (id)secondLabel;
- (void)setFirstLabel:;
@end
