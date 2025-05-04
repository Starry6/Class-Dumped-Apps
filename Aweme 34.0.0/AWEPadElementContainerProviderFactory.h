@interface AWEPadElementContainerProviderFactory : NSObject
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> viewController;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)initWithViewController:context:;
- (id)buildProviders;
- (id)viewController;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setViewController:;
+ (Class)aAWEPadModuleAdapterClass;
@end
