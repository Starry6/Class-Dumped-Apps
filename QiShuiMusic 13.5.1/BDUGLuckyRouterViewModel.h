@interface BDUGLuckyRouterViewModel : NSObject
@property (nonatomic) UIView<BDXViewContainerProtocol> lynxView;
@property (nonatomic) @? loadBlock;
@property (nonatomic) @? viewAppearBlock;
@property (nonatomic) @? viewDisappearBlock;
- (id)viewAppearBlock;
- (id)lynxView;
- (void)setLoadBlock:;
- (void)setLynxView:;
- (void)setViewAppearBlock:;
- (void)setViewDisappearBlock:;
- (id)viewDisappearBlock;
- (void).cxx_destruct;
- (id)loadBlock;
@end
