@interface PKModifyStrokesCommand : PKUndoCommand
@property (nonatomic) NSArray strokes;
@property (nonatomic) BOOL hide;
- (BOOL)hide;
- (void).cxx_destruct;
- (id)description;
- (id)strokes;
- (id)invertedInDrawing:;
- (void)applyToDrawing:;
- (id)initWithStrokes:drawingUUID:actionName:hiding:;
+ (id)commandForMakingStrokeVisible:drawing:hiding:;
+ (id)commandForMakingStrokesVisible:drawing:hiding:;
+ (id)commandForErasingAllStrokesInDrawing:;
+ (id)commandForErasingStrokes:drawing:;
@end
