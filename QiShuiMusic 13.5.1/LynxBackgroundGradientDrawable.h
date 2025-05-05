@interface LynxBackgroundGradientDrawable : LynxBackgroundDrawable
@property (nonatomic) LynxGradient gradient;
@property (nonatomic) CAReplicatorLayer horizontalRepeatLayer;
@property (nonatomic) CAReplicatorLayer verticalRepeatLayer;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)handleBackgroundRepeat:size:height:width:offsetX:offsetY:;
- (id)horizontalRepeatLayer;
- (void)onDraw:rect:;
- (void)onPrepareGradientWithSize:;
- (void)prepareGradientWithBorderBox:andPaintBox:andClipRect:;
- (void)setHorizontalRepeatLayer:;
- (void)setVerticalRepeatLayer:;
- (id)verticalRepeatLayer;
- (void)setGradient:;
- (id)gradient;
- (id)gradientLayer;
- (BOOL)isReady;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setGradientLayer:;
- (BOOL)isGradient;
@end
