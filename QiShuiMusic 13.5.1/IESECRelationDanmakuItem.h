@interface IESECRelationDanmakuItem : UIView
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UILabel commentLabel;
@property (nonatomic) UILabel xLabel;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) BOOL hasComputed;
- (void)setHasComputed:;
- (BOOL)hasComputed;
- (id)initWithComment:number:;
- (void)setupLayer;
- (void)setXLabel:;
- (id)xLabel;
- (id)gradientLayer;
- (id)shapeLayer;
- (void)setShapeLayer:;
- (void).cxx_destruct;
- (id)maskLayer;
- (void)setGradientLayer:;
- (void)setupViews;
- (void)setMaskLayer:;
- (id)commentLabel;
- (void)setCommentLabel:;
- (id)numberLabel;
- (void)setNumberLabel:;
@end
