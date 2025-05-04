@interface AWEDefaultLeftElementContainerProvider : NSObject
@property (nonatomic) AWEElementContainer container;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> viewController;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) double containerWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)duxGrid_superViewDidChangeBreakPointFrom:toBreakPoint:;
- (id)initWithViewController:context:;
- (void)setContainer:;
- (id)container;
- (void)layout;
- (id)containerView;
- (id)viewController;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setViewController:;
- (void)rebuild;
- (double)containerWidth;
@end
