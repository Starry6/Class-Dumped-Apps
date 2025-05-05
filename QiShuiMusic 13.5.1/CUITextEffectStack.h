@interface CUITextEffectStack : CUIShapeEffectStack
- (id)initWithEffectPreset:;
- (BOOL)useCoreImageRendering;
- (double)effectiveInteriorFillOpacity;
- (id)newBackgroundPatternColorWithSize:contentScale:forContext:;
- (id)newGlyphMaskContextForBounds:fromContext:withScale:;
- (void)drawProcessedMask:atBounds:inContext:withScale:;
- (void)_drawShadow:forGlyphs:inContext:usingFont:withAdvances:count:;
- (void)drawGlyphs:inContext:usingFont:withAdvances:count:lineHeight:inBounds:atScale:;
- (void)_drawShadow:forGlyphs:inContext:usingFont:atPositions:count:;
- (void)drawGlyphs:inContext:usingFont:atPositions:count:lineHeight:inBounds:atScale:;
- (void)_drawShadow:usingQuartz:inContext:;
- (void)drawUsingQuartz:inContext:inBounds:atScale:;
@end
