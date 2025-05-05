@interface LPGlyphStyle : NSObject
@property (nonatomic) LPImage image;
@property (nonatomic) LPPadding padding;
@property (nonatomic) double opacity;
@property (nonatomic) LPImageViewStyle imageStyle;
@property (nonatomic) LPPointUnit baselineOffset;
@property (nonatomic) UIColor color;
- (void)setOpacity:;
- (id)init;
- (void)setColor:;
- (id)baselineOffset;
- (double)opacity;
- (void)setImage:;
- (id)color;
- (void)setBaselineOffset:;
- (void).cxx_destruct;
- (id)padding;
- (id)image;
- (id)initSearchGlyph;
- (id)imageStyle;
@end
