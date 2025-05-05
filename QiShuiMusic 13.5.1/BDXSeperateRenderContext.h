@interface BDXSeperateRenderContext : NSObject
@property (nonatomic) UIView<BDXLynxViewProtocol> lynxView;
@property (nonatomic) float rootHeight;
- (id)lynxView;
- (float)rootHeight;
- (void)setLynxView:;
- (void)setRootHeight:;
- (void).cxx_destruct;
@end
