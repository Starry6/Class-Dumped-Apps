@interface AnnieLiveBizNavbar : UIView
@property (nonatomic) AnnieLiveBizSchemeParam schemeParams;
@property (nonatomic) UIViewController<BDXContainerProtocol> container;
@property (nonatomic) @? onLeftButtonClick;
@property (nonatomic) @? onRightButtonClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachToContainerWithParams:context:;
- (id)onLeftButtonClick;
- (id)onRightButtonClick;
- (id)schemeParams;
- (void)setOnLeftButtonClick:;
- (void)setOnRightButtonClick:;
- (void)setSchemeParams:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
