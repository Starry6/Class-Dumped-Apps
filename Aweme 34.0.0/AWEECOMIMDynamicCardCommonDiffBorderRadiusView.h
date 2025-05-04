@interface AWEECOMIMDynamicCardCommonDiffBorderRadiusView : UIView
@property (nonatomic) CAShapeLayer borderLayer;
@property (nonatomic) UIImageView imgView;
@property (nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel model;
- (void)updateViewWithModel:;
- (void)setImgView:;
- (id)imgView;
- (void)updateViewWithModel:completion:;
- (void)addBorderToImageView:;
- (void)addDifferentCornerRadiusForLeftTop:leftBottom:rightTop:rightBottom:contianerBorderColor:contianerBorderWidth:isDash:;
- (void)didResetFrame;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)borderLayer;
- (void)setBorderLayer:;
@end
