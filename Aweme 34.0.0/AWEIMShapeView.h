@interface AWEIMShapeView : UIView
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIColor strokeColor;
@property (nonatomic) @? geometryDidChangedBlock;
- (void)p_setupUI;
- (void)iesim_themeReload:;
- (void)p_setupThemeDynamicConfig;
- (id)geometryDidChangedBlock;
- (void)setGeometryDidChangedBlock:;
- (void)setFillColor:;
- (id)fillColor;
- (void)setStrokeColor:;
- (id)init;
- (id)strokeColor;
- (id)initWithFrame:;
- (id)shapeLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (Class)layerClass;
@end
