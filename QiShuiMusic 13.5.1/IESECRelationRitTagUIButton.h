@interface IESECRelationRitTagUIButton : UIView
@property (nonatomic) UIView background;
@property (nonatomic) {UIEdgeInsets=dddd} padding;
@property (nonatomic) NSMutableArray componentsArr;
@property (nonatomic) NSMutableArray componentsRadiusArr;
- (double)calculateLeftRightPaddingWithFontSize:;
- (id)componentsArr;
- (id)componentsRadiusArr;
- (void)generateImageComponentWithImageModel:;
- (void)generateSplitorComponentWithSplitorConfig:;
- (void)generateTextComponentWithTextConfig:;
- (void)setComponentsArr:;
- (void)setComponentsRadiusArr:;
- (void)updateBackgroundWithConfig:;
- (void)updateUIWithItems:;
- (void)updateWithRitTagUIModel:;
- (id)background;
- (void)setBackground:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setPadding:;
- (void).cxx_destruct;
- (id)padding;
- (void)setUpViews;
@end
