@interface CHStrokeGroupBaselineVisualization : CHStrokeGroupBasedVisualization
- (void)drawVisualizationInRect:context:viewBounds:;
- (long long)layeringPriority;
- (id)dirtyRectForStrokeGroup:;
@end
