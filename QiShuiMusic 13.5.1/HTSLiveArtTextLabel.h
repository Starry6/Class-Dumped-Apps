@interface HTSLiveArtTextLabel : UILabel
@property (nonatomic) double letterSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double shadowBlur;
@property (nonatomic) double innerShadowBlur;
@property (nonatomic) {CGSize=dd} innerShadowOffset;
@property (nonatomic) UIColor innerShadowColor;
@property (nonatomic) double strokeSize;
@property (nonatomic) UIColor strokeColor;
@property (nonatomic) q strokePosition;
@property (nonatomic) UIColor gradientStartColor;
@property (nonatomic) UIColor gradientEndColor;
@property (nonatomic) NSArray gradientColors;
@property (nonatomic) {CGPoint=dd} gradientStartPoint;
@property (nonatomic) {CGPoint=dd} gradientEndPoint;
@property (nonatomic) Q fadeTruncatingMode;
@property (nonatomic) {UIEdgeInsets=dddd} textInsets;
@property (nonatomic) BOOL automaticallyAdjustTextInsets;
- (id)contentRectFromSize:withInsets:;
- (BOOL)automaticallyAdjustTextInsets;
- (unsigned long long)fadeTruncatingMode;
- (id)fittingTextInsets;
- (id)frameRefFromSize:textRectOutput:;
- (id)gradientEndPoint;
- (id)gradientStartPoint;
- (BOOL)hasFadeTruncating;
- (id)inverseMaskFromAlphaMask:withRect:;
- (id)linearGradientImageWithRect:fadeHead:fadeTail:;
- (void)setAutomaticallyAdjustTextInsets:;
- (void)setFadeTruncatingMode:;
- (void)setGradientEndPoint:;
- (void)setGradientStartPoint:;
- (void)setStrokePosition:;
- (id)strokeImageWithRect:frameRef:strokeSize:strokeColor:;
- (long long)strokePosition;
- (double)strokeSizeDependentOnStrokePosition;
- (id)textRectFromContentRect:framesetterRef:;
- (void)setDefaults;
- (void)setTextInsets:;
- (id)textInsets;
- (void)drawRect:;
- (BOOL)hasShadow;
- (id)intrinsicContentSize;
- (void)setStrokeColor:;
- (id)strokeColor;
- (void)setShadowBlur:;
- (id)initWithFrame:;
- (id)gradientColors;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (double)shadowBlur;
- (double)lineSpacing;
- (void)setLineSpacing:;
- (void)setGradientColors:;
- (BOOL)hasStroke;
- (id)innerShadowColor;
- (void)setInnerShadowColor:;
- (id)innerShadowOffset;
- (void)setInnerShadowOffset:;
- (double)innerShadowBlur;
- (void)setInnerShadowBlur:;
- (void)setGradientStartColor:;
- (void)setGradientEndColor:;
- (id)gradientStartColor;
- (id)gradientEndColor;
- (BOOL)hasInnerShadow;
- (double)letterSpacing;
- (void)setLetterSpacing:;
- (double)strokeSize;
- (void)setStrokeSize:;
- (BOOL)hasGradient;
@end
