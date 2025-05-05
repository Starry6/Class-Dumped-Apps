@interface CHStrokeGroupingVisualization : CHStrokeGroupBasedVisualization
- (void)drawVisualizationInRect:context:viewBounds:;
- (id)dirtyRectForStrokeGroup:;
- (id)_newColorForStroke:inGroup:;
@end
