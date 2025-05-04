@interface AWEVectorGraphicsLayer : AWEGraphicsLayer
@property (nonatomic) UIBezierPath path;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIColor strokeColor;
- (id)initWithFrame:path:;
- (void)setFillColor:;
- (id)fillColor;
- (void)setStrokeColor:;
- (unsigned long long)hash;
- (id)strokeColor;
- (id)path;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)renderInContext:;
@end
