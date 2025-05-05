@interface NSGlyphGenerator : NSObject
- (void)generateGlyphsForGlyphStorage:desiredNumberOfCharacters:glyphIndex:characterIndex:;
+ (id)defaultGlyphGenerator;
+ (id)sharedGlyphGenerator;
@end
