@interface PKUndoCommand : NSObject
@property (nonatomic) <PKDrawingUUID> drawingUUID;
@property (nonatomic) NSString actionName;
@property (nonatomic) BOOL changesVisibleStrokes;
- (id)inverted;
- (void)setActionName:;
- (void).cxx_destruct;
- (id)actionName;
- (id)strokes;
- (id)initWithDrawingUUID:actionName:;
- (id)invertedInDrawing:;
- (void)applyToDrawing:;
- (id)drawingUUID;
- (id)initWithDrawingUUID:actionName:changesVisibleStrokes:;
- (void)registerWithUndoManager:target:selector:;
- (id)applyToDrawingReturnInverted:;
- (BOOL)changesVisibleStrokes;
@end
