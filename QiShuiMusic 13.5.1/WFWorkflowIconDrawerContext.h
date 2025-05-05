@interface WFWorkflowIconDrawerContext : NSObject
@property (nonatomic) ^{CGFont=} glyphFont;
@property (nonatomic) NSSet coreGlyphsCatalogs;
@property (nonatomic) r^{__CTFont=} glyphTestFont;
- (void)dealloc;
- (void).cxx_destruct;
- (id)glyphFont;
- (id)coreGlyphsCatalogs;
- (id)glyphTestFont;
- (id)newGlyphFontForSize:;
+ (id)cachedContextOrNewContext;
+ (double)glyphTestFontSize;
@end
