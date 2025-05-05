@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization
- (void)drawVisualizationInRect:context:viewBounds:;
- (long long)layeringPriority;
- (id)dirtyRectForStrokeGroup:;
- (BOOL)wantsInputDrawings;
- (id)_transformForInputDrawingBounds:referenceBounds:viewBounds:;
- (void)_drawGroupBrackgroundInRect:context:;
- (BOOL)shouldDrawStrokeGroup:;
- (void)drawInputDrawing:inContext:transform:;
- (void)_drawCutPoints:inputDrawing:inContext:transform:;
@end
