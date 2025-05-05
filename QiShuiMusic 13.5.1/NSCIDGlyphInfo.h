@interface NSCIDGlyphInfo : NSGlyphInfo
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (unsigned int)_glyphForFont:baseString:;
- (id)initWithCharacterIdentifier:collection:baseString:;
+ (BOOL)supportsSecureCoding;
+ (id)glyphInfoWithCharacterIdentifier:collection:baseString:;
@end
