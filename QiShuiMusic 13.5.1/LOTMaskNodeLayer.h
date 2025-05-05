@interface LOTMaskNodeLayer : CAShapeLayer
@property (nonatomic) LOTMask maskNode;
- (BOOL)hasUpdateForFrame:;
- (void)updateForFrame:withViewBounds:;
- (void).cxx_destruct;
- (id)initWithMask:;
- (id)maskNode;
@end
