@interface CTGlyphStorageInterface : NSObject
- (void)setAdvance:forIndex:;
- (void)disposeGlyphStack;
- (void)initGlyphStack:;
- (id)createCopy:;
- (void)setStringIndex:forIndex:;
- (void)pushGlyph:;
- (void)moveGlyphsTo:from:;
- (void)insertGlyphs:;
- (void)popGlyph:;
- (void)setGlyphID:forIndex:;
- (void)getCustomAdvance:forIndex:;
- (void)setAbsorbedCount:forIndex:;
- (void)setProps:forIndex:;
- (void)swapGlyph:withIndex:;
@end
