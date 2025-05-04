@interface AWEGraphicsLayer : CALayer
@property (nonatomic) @? drawingActions;
- (id)drawingActions;
- (void)setDrawingActions:;
- (id)init;
- (unsigned long long)hash;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (BOOL)isEqual:;
- (void)renderInContext:;
@end
