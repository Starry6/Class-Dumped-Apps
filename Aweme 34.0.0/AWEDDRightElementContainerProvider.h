@interface AWEDDRightElementContainerProvider : NSObject
@property (nonatomic) AWEMultiElementContainer elementContainer;
@property (nonatomic) AWEMultiElementContainerViewModel containerViewModel;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> viewController;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) double containerWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerViewModel;
- (id)elementContainer;
- (id)initWithViewController:context:;
- (void)setElementContainer:;
- (void)setContainerViewModel:;
- (id)elementBuildStrategyIDs;
- (id)elementLayoutStrategyIDs;
- (void)setModel:;
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
