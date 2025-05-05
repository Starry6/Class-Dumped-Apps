@interface PKModifyStrokesGroupIDCommand : PKUndoCommand
@property (nonatomic) NSArray strokes;
@property (nonatomic) NSUUID groupID;
@property (nonatomic) NSUUID oldGroupID;
- (id)groupID;
- (void).cxx_destruct;
- (id)description;
- (id)strokes;
- (id)invertedInDrawing:;
- (void)applyToDrawing:;
- (id)applyToDrawingReturnInverted:;
- (id)initWithStrokes:drawingUUID:actionName:groupID:oldGroupID:;
- (id)oldGroupID;
+ (id)commandForModifyingStrokes:drawing:groupID:actionName:;
@end
