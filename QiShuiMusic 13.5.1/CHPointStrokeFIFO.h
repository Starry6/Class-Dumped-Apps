@interface CHPointStrokeFIFO : CHPointFIFO
@property (nonatomic) CHDrawing strokes;
@property (nonatomic) CHDrawing drawing;
- (void)flush;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (id)initWithFIFO:;
- (id)strokes;
- (void)setStrokes:;
- (id)drawing;
- (void)setDrawing:;
@end
