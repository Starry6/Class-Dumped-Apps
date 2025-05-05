@interface CHStrokeGroupBaselineLegacyVisualization : CHStrokeGroupBasedVisualization
- (void)drawVisualizationInRect:context:viewBounds:;
- (long long)layeringPriority;
- (id)dirtyRectForStrokeGroup:;
- (id)_newBaselinePathForStrokeGroup:outFirstPoint:strokeProvider:;
- (void)_getOrientedBounds:length:forStroke:atWritingDirectionIndex:inGroup:;
- (id)_orientationTransformForStrokeBounds:atWritingDirectionIndex:inGroup:;
- (id)_labelBoundsForAnchorPoint:;
@end
