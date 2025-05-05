@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)glyphName;
- (id)initWithGlyphName:glyph:forFont:baseString:;
+ (BOOL)supportsSecureCoding;
@end
