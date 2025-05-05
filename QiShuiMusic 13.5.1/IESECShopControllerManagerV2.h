@interface IESECShopControllerManagerV2 : NSObject
@property (nonatomic) IESECServiceProxy<IESECShopForwardCoService> forwardCoService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadControllers;
- (id)controllerArrayBySelector:;
- (Class)controllerClassForProtocol:;
- (void)controllerDidAppear:;
- (void)controllerDidDisappear:;
- (void)controllerDidLoad;
- (id)controllerForProtocol:;
- (id)controllerLoadArray;
- (void)controllerWillAppear:;
- (void)controllerWillDisappear:;
- (id)forwardCoService;
- (id)initWithPageContext:;
- (void)loadControllerForProtocol:;
- (void)registerControllerClass:forProtocol:;
- (void)setForwardCoService:;
- (void)syncControllerLifeCycle:;
- (void).cxx_destruct;
@end
