@interface AWEMerchandiseComponentCellDropDown : AWEMerchandiseComponentBaseCell
@property (nonatomic) CAShapeLayer shapeViewLayer;
@property (nonatomic) CAShapeLayer shapeViewBorderLayer;
@property (nonatomic) double bottomMargin;
@property (nonatomic) UIView shapeView;
@property (nonatomic) UIView shapeBackView;
@property (nonatomic) {?=dddd} dropDownCornerRadius;
- (void)setShapeView:;
- (id)shapeView;
- (void)configWithComponentModel:filterManager:;
- (void)setDropDownCornerRadius:;
- (id)shapeBackView;
- (id)dropDownCornerRadius;
- (void)addShapLayerWithAllCorner;
- (void)addShapLayer;
- (id)shapeViewLayer;
- (id)shapeViewBorderLayer;
- (void)setShapeBackView:;
- (void)setShapeViewLayer:;
- (void)setShapeViewBorderLayer:;
- (void)layoutIfNeeded;
- (id)initWithFrame:;
- (double)bottomMargin;
- (void).cxx_destruct;
- (void)setBottomMargin:;
+ (double)titleWidthWithModel:filterManager:;
+ (BOOL)isSelectWithModel:filterManager:;
+ (void)configDisplayTextWithModel:filterManager:;
+ (id)identifier;
@end
