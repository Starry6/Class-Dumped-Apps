@interface AWEPadLeftElementContainerProvider : AWEPadElementContainerProvider
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> viewController;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) double containerWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (void)duxGrid_superViewDidChangeBreakPointFrom:toBreakPoint:;
- (void)setContainer:;
- (id)container;
- (void)layout;
- (void).cxx_destruct;
- (void)rebuild;
- (double)containerWidth;
+ (Class)aAWEPadModuleAdapterClass;
@end
