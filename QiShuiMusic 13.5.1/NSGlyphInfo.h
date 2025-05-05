@interface NSGlyphInfo : NSObject
- (void)dealloc;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:;
- (id)baseString;
- (void)encodeWithCoder:;
- (id)glyphName;
- (id)copyWithZone:;
- (id)_baseString;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (id)initWithBaseString:;
- (unsigned int)_glyphForFont:baseString:;
- (unsigned short)glyphID;
+ (BOOL)supportsSecureCoding;
+ (id)glyphInfoWithGlyphName:forFont:baseString:;
+ (id)glyphInfoWithCGGlyph:forFont:baseString:;
+ (id)glyphInfoWithGlyph:forFont:baseString:;
+ (id)glyphInfoWithCharacterIdentifier:collection:baseString:;
@end
