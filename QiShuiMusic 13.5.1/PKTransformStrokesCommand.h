@interface PKTransformStrokesCommand : PKUndoCommand
@property (nonatomic) NSArray strokes;
@property (nonatomic) {CGAffineTransform=dddddd} strokeTransform;
@property (nonatomic) NSArray strokeTransforms;
- (void).cxx_destruct;
- (id)description;
- (id)strokes;
- (id)strokeTransform;
- (id)initWithStrokes:drawingUUID:actionName:strokeTransform:;
- (id)initWithStrokes:drawingUUID:actionName:strokeTransforms:;
- (id)invertedInDrawing:;
- (void)applyToDrawing:;
- (id)strokeTransforms;
+ (id)commandForTransforming:drawing:strokeTransform:;
+ (id)commandForTransforming:drawing:strokeTransforms:;
@end
