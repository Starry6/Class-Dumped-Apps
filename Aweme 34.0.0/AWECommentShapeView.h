@interface AWECommentShapeView : UIView
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIColor strokeColor;
- (void)awe_themeReload;
- (void)setFillColor:;
- (id)fillColor;
- (void)setStrokeColor:;
- (id)strokeColor;
- (id)shapeLayer;
- (void).cxx_destruct;
+ (Class)layerClass;
@end
