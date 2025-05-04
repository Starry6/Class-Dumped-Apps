@interface AWEPadRightElementContainerProvider : AWEPadElementContainerProvider
@property (nonatomic) AWEPadRightElementLayout containerLayout;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> viewController;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) double containerWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (void)duxGrid_superViewDidChangeBreakPointFrom:toBreakPoint:;
- (void)setContainerLayout:;
- (void)setContainer:;
- (id)container;
- (void)layout;
- (void).cxx_destruct;
- (id)containerLayout;
- (double)containerWidth;
+ (Class)aAWEPadModuleAdapterClass;
@end
