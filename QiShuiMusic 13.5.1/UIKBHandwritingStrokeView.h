@interface UIKBHandwritingStrokeView : UIView
@property (nonatomic) ^{CGContext=} bitmapContext;
@property (nonatomic) double scaleFactor;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} aggregateInvalidRect;
@property (nonatomic) UIKBHandwritingView keyView;
- (void)drawRect:;
- (void)dealloc;
- (double)scaleFactor;
- (void).cxx_destruct;
- (BOOL)_wantsDeepDrawing;
- (id)handwritingPointToRect:;
- (void)createBitmapIfNeeded;
- (void)updateInkColor;
- (id)convertRectToBitmapCoordinates:;
- (id)convertRectToViewCoordinates:;
- (void)addHandwritingPoint:;
- (void)addTrapezoidFromFirstPoint:secondPoint:;
- (void)clearRect:;
- (id)viewPointFromDataPoint:;
- (void)redrawStrokesInRect:;
- (void)displayAggregateInvalidRect;
- (id)keyView;
- (void)setKeyView:;
- (id)bitmapContext;
- (id)aggregateInvalidRect;
@end
