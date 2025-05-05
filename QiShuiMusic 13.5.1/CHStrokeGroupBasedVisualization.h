@interface CHStrokeGroupBasedVisualization : CHVisualization
@property (nonatomic) CHRecognitionSessionResult resultDrawn;
@property (nonatomic) NSSet activeStrokeGroupAncestorIdentifiers;
@property (nonatomic) <CHStrokeGroupBasedVisualizationDelegate> delegate;
@property (nonatomic) BOOL newGroupsDefaultToActive;
- (void).cxx_destruct;
- (void)drawVisualizationInRect:context:viewBounds:;
- (id)dirtyRectForStrokeGroup:;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)toggleVisualizationRegionAtPoint:;
- (void)_markStrokeGroupsAsActive:;
- (id)resultDrawn;
- (void)setResultDrawn:;
- (id)activeStrokeGroupAncestorIdentifiers;
- (void)setActiveStrokeGroupAncestorIdentifiers:;
- (BOOL)newGroupsDefaultToActive;
@end
