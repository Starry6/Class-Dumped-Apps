@interface UIKBRenderFactoryHWR_Landscape : UIKBRenderFactoryHWR_Portrait
- (double)symbolImageControlKeyFontSize;
- (void)setupLayoutSegments;
- (id)_traitsForKey:onKeyplane:;
- (id)deleteGlyphOffset;
- (double)spaceKeyFontSize;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:key:onKeyplane:;
- (id)symbolFrameInsets;
- (double)handwritingGradientStartLocation;
- (id)handwritingAreaInsets;
- (id)spaceKeyTextOffset;
@end
