@interface AWELiveVSFormatTagView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UILabel tagLabel;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)pinkGradientBgLabelWithFrame:;
- (id)blueGradientBgLabelWithFrame:;
- (id)purpleGradientBgLabelWithFrame:;
- (id)gradientBgLabelWithFrame:startColor:endColor:;
- (void)updateWithTagType:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setGradientLayer:;
@end
