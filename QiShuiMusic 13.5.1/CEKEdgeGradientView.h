@interface CEKEdgeGradientView : UIView
@property (nonatomic) q edgeGradientStyle;
@property (nonatomic) UIColor customEdgeGradientColor;
@property (nonatomic) q gradientDirection;
@property (nonatomic) {UIEdgeInsets=dddd} contentInsets;
@property (nonatomic) double outerColorLength;
@property (nonatomic) double innerFadeLength;
@property (nonatomic) {?=dddd} gradientDimensions;
- (void)setContentInsets:;
- (void)drawRect:;
- (id)contentInsets;
- (BOOL)isOpaque;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (long long)gradientDirection;
- (void)setGradientDirection:;
- (void)setEdgeGradientStyleMask;
- (void)setGradientDimensions:;
- (double)outerColorLength;
- (void)setOuterColorLength:;
- (double)innerFadeLength;
- (void)setInnerFadeLength:;
- (void)setEdgeGradientStyleBlack;
- (void)setCustomEdgeGradientStyleWithColor:;
- (long long)edgeGradientStyle;
- (id)customEdgeGradientColor;
- (id)gradientDimensions;
@end
