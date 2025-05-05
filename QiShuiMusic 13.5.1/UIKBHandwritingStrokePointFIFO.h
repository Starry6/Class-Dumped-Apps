@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO
@property (nonatomic) TIHandwritingStrokes strokes;
- (void)flush;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (id)initWithFIFO:;
- (id)scaleStrokes:;
- (id)strokes;
- (void)setStrokes:;
@end
