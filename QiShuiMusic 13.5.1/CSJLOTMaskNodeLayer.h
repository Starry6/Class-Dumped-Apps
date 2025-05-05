@interface CSJLOTMaskNodeLayer : CAShapeLayer
@property (nonatomic) CSJLOTMask maskNode;
- (BOOL)hasUpdateForFrame:;
- (void)updateForFrame:withViewBounds:;
- (void).cxx_destruct;
- (id)initWithMask:;
- (id)maskNode;
@end
