@interface FigHUDLayer : CALayer
- (void)drawInContext:;
- (id)init;
- (void)setValue:atIndex:;
- (void)dealloc;
- (void)setFont:withPointSize:;
- (void)resetLines;
- (long long)addLine:withColorIndex:;
- (long long)addLine:withLabelColorIndex:withValueColorIndex:;
- (id)getValues;
- (id)getLabels;
- (void)setValueAtIndex:format:;
@end
