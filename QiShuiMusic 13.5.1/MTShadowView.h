@interface MTShadowView : UIImageView
@property (nonatomic) {?=f{CGSize=dd}d} shadowAttributes;
@property (nonatomic) {UIEdgeInsets=dddd} shadowOutsets;
@property (nonatomic) double maskCornerRadius;
@property (nonatomic) BOOL continuousCorners;
@property (nonatomic) UIColor shadowColor;
- (id)shadowOutsets;
- (void)_updateShadowOutsetsIfNecessary;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateShadowVisualStyling;
- (id)frameWithContentWithFrame:;
- (double)maskCornerRadius;
- (void)traitCollectionDidChange:;
- (id)shadowAttributes;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)shadowColor;
- (BOOL)continuousCorners;
- (void)setShadowColor:;
- (id)initWithShadowAttributes:maskCornerRadius:continuousCorners:;
- (id)initWithShadowAttributes:maskCornerRadius:;
- (void)_validateImage;
@end
