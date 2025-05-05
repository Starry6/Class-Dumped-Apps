@interface NSIdentityGlyphInfo : NSGlyphInfo
- (unsigned short)glyph;
- (void)dealloc;
- (id)_font;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:baseString:;
- (id)initWithGlyph:forFont:baseString:;
+ (BOOL)supportsSecureCoding;
+ (id)glyphInfoWithGlyph:forFont:baseString:;
@end
