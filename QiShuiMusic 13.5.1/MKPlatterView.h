@interface MKPlatterView : UIView
@property (nonatomic) BOOL highlighted;
@property (nonatomic) NSString glyph;
@property (nonatomic) UIFont glyphFont;
@property (nonatomic) UIColor glyphColor;
@property (nonatomic) BOOL showPlatterBackground;
- (void)setGlyph:;
- (id)glyph;
- (void)touchesBegan:withEvent:;
- (void)layoutSubviews;
- (id)glyphColor;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)setGlyphColor:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (void)infoCardThemeChanged;
- (id)glyphFont;
- (void)setGlyphFont:;
- (void)updateGlyph;
- (void)setShowPlatterBackground:;
- (BOOL)showPlatterBackground;
@end
