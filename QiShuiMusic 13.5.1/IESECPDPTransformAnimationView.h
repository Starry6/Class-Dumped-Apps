@interface IESECPDPTransformAnimationView : IESECSliceXViewElementView
@property (nonatomic) NSArray config;
- (void)animateIndex:;
- (void)setupConfig:;
- (void)setupElementView;
- (BOOL)updateWithSliceXElement:error:;
- (void)setConfig:;
- (void).cxx_destruct;
- (void)animate;
- (id)config;
@end
