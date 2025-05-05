@interface SFPrivacyReportIconView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)intrinsicContentSize;
- (id)gradientLayer;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)_updateColors;
- (void)_updateSymbolConfiguration;
+ (Class)layerClass;
@end
