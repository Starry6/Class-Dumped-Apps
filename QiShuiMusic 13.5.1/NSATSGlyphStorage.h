@interface NSATSGlyphStorage : CTGlyphStorageInterface
- (void)setAdvance:forIndex:;
- (void)dealloc;
- (void)disposeGlyphStack;
- (void)initGlyphStack:;
- (id)createCopy:;
- (void)setStringIndex:forIndex:;
- (void)finalize;
- (id)release;
- (void)pushGlyph:;
- (void)moveGlyphsTo:from:;
- (void)insertGlyphs:;
- (void)popGlyph:;
- (void)setGlyphID:forIndex:;
- (void)getCustomAdvance:forIndex:;
- (void)setAbsorbedCount:forIndex:;
- (void)setProps:forIndex:;
- (void)swapGlyph:withIndex:;
+ (id)allocWithZone:;
@end
