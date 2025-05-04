@interface AWERTVEffectGameCastContainerViewController : UIViewController
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVXRControllerInjector> controllerInjector;
@property (nonatomic) <RTVXRInteractionController> xrinteractionController;
@property (nonatomic) <RTVInteractionController> interactionController;
@property (nonatomic) <RTVEffectGameListController> gameListController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <RTVInteractionFunctionContentDelegate> delegate;
- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (void)__addGameListVC;
- (id)gameListController;
- (void)didChangeInteractionController:context:;
- (id)xrinteractionController;
- (void)effectGameListController:selectGame:;
- (void)renderViewModel:;
- (id)delegate;
- (void)viewDidLoad;
- (id)injector;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)interactionController;
@end
