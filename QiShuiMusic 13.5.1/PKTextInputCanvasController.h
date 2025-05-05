@interface PKTextInputCanvasController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reportDebugStateDescription:;
- (void)canvasView:drawingDidChange:;
- (void)canvasViewWillBeginNewStroke:withTouch:;
- (void)canvasView:beganStroke:;
- (void)canvasView:cancelledStroke:;
- (void)canvasView:endedStroke:;
- (void)canvasViewDidBeginDrawing:;
- (void)canvasViewDrawingMoved:withTouch:;
- (void)canvasViewDidEndDrawing:;
- (void)canvasViewDidFinishAnimatingStrokes:;
- (void)canvasViewHasVisibleStrokesChanged:;
- (id)canvasViewTouchView:;
- (void)canvasView:didPresentWithCanvasOffset:;
- (BOOL)canvasViewShouldDisableShapeRecognition:;
- (void)replayCanvasViewDrawingMoved:inputPoint:;
- (id)canvasView:inkForStroke:;
@end
