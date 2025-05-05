@interface VKVectorOverlayCircle : VKVectorOverlayData
@property (nonatomic) {shared_ptr<md::CircleOverlayRenderable>=^{CircleOverlayRenderable}^{__shared_weak_count}} renderable;
@property (nonatomic) {Box<double bounds;
@property (nonatomic) double lineWidth;
@property (nonatomic) ^{CGColor=} fillColor;
@property (nonatomic) ^{CGColor=} strokeColor;
@property (nonatomic) double alpha;
- (void)setLineWidth:;
- (id)fillColor;
- (double)lineWidth;
- (void)dealloc;
- (void)setStrokeColor:;
- (void)setFillColor:;
- (void)setAlpha:;
- (id)strokeColor;
- (void)setBlendMode:;
- (double)alpha;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_bounds;
- (id)initWithMapRect:lineWidth:fillColor:strokeColor:alpha:;
- (void)_updateStyleColor;
- (id)_renderable;
@end
