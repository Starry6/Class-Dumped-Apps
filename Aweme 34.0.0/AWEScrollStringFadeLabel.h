@interface AWEScrollStringFadeLabel : AWEScrollStringLabel
@property (nonatomic) CAGradientLayer fadeLayer;
@property (nonatomic) double fadeLayerWidth;
- (void)updateFadeLayerColorWithCurrent:;
- (void)setFadeLayerWidth:;
- (double)fadeLayerWidth;
- (id)initWithHeight:fadeLayerWidth:;
- (void).cxx_destruct;
- (id)fadeLayer;
- (void)setFadeLayer:;
@end
