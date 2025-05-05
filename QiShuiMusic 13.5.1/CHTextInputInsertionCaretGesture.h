@interface CHTextInputInsertionCaretGesture : CHTextInputGesture
@property (nonatomic) {CGPoint=dd} caretTipPoint;
- (void)getAffectedRange:expandedToFullTokens:;
- (id)initWithCaretTipPoint:targetContentInfo:locale:normalizedDrawing:originalDrawing:;
- (long long)caretDirection;
- (id)caretTipPoint;
@end
