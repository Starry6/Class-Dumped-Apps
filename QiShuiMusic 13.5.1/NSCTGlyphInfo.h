@interface NSCTGlyphInfo : NSGlyphInfo
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (id)release;
- (void)encodeWithCoder:;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)_cfTypeID;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
- (id)glyphName;
- (id)_baseString;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:baseString:;
+ (BOOL)supportsSecureCoding;
@end
