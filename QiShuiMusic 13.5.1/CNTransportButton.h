@interface CNTransportButton : UIButton
@property (nonatomic) UIImage image;
@property (nonatomic) q transportType;
@property (nonatomic) BOOL showBackgroundPlatter;
@property (nonatomic) UIColor glyphColor;
- (void)setTransportType:;
- (id)intrinsicContentSize;
- (id)glyphColor;
- (long long)transportType;
- (void)setImage:;
- (void)tintColorDidChange;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setGlyphColor:;
- (id)image;
- (BOOL)showBackgroundPlatter;
- (void)setShowBackgroundPlatter:;
- (void)_updateImageWithType:;
- (void)_updateTouchInsetsToFillContainerWithSize:;
+ (id)transportButton;
+ (id)transportButtonWithType:;
@end
