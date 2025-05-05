@interface PKSliceStrokesCommand : PKModifyStrokesCommand
@property (nonatomic) NSDictionary substrokes;
- (void).cxx_destruct;
- (id)description;
- (id)invertedInDrawing:;
- (void)applyToDrawing:;
- (id)initWithDrawingUUID:actionName:substrokes:strokesHidden:hiding:;
- (id)substrokes;
@end
