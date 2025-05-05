@interface WFWorkflowGlyphIcon : WFIcon
@property (nonatomic) S glyph;
@property (nonatomic) WFIconBackground background;
- (id)background;
- (unsigned short)glyph;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
- (id)initWithGlyph:background:;
+ (BOOL)supportsSecureCoding;
@end
