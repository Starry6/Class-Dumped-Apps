@interface AVPictureInPictureIndicatorSublayer : CALayer
@property (nonatomic) NSString customText;
- (id)init;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (void)setCustomText:;
- (id)customText;
- (id)initWithDisplayScale:placeholderImage:opaque:;
- (void)layoutSublayersWithTextAndImageUsingInsetBounds:;
- (id)textBoundingRectWhenDrawnInRect:;
- (BOOL)canRenderAttributedTextWithoutTruncationInsideRect:;
@end
