@interface CHStrokeVisualization : CHVisualization
@property (nonatomic) <CHStrokeProvider> _strokeProviderDrawn;
- (void).cxx_destruct;
- (void)drawVisualizationInRect:context:viewBounds:;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)drawStrokesFromStrokeProvider:inRect:context:;
- (id)_strokeProviderDrawn;
- (void)set_strokeProviderDrawn:;
@end
