@interface CRCompositeOutputRegion : CROutputRegion
- (id)outputRegionWithContentsOfCharacterRange:;
- (id)outputRegionWithContentsOfQuad:;
- (id)outputRegionWithContentsBetweenStartPoint:endPoint:;
- (void)setShouldComputeBoundsFromChildren:;
@end
