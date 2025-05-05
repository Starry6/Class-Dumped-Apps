@interface PKModifyStrokeInkCommand : PKUndoCommand
@property (nonatomic) NSArray strokes;
@property (nonatomic) NSArray inks;
@property (nonatomic) NSArray oldInks;
- (void).cxx_destruct;
- (id)description;
- (id)strokes;
- (id)invertedInDrawing:;
- (void)applyToDrawing:;
- (id)applyToDrawingReturnInverted:;
- (id)inks;
- (id)initWithStrokes:drawingUUID:actionName:inks:oldInks:;
- (id)oldInks;
+ (id)commandForModifyingStrokes:drawing:inks:;
@end
