@interface AWEStudioProgressView : UIView
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) UIColor progressTintColor;
@property (nonatomic) UIColor trackTintColor;
@property (nonatomic) BOOL rounded;
- (BOOL)rounded;
- (void)setRounded:;
- (id)initWithFrame:;
- (id)shapeLayer;
- (void)setProgressTintColor:;
- (void).cxx_destruct;
- (id)progressTintColor;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setProgress:animated:;
- (void)setTrackTintColor:;
- (id)trackTintColor;
- (void)setMaskLayer:;
+ (Class)layerClass;
@end
