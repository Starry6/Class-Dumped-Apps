@interface AWEPlayInteractionEnterFullPageGoodRouter : NSObject
@property (nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol><AWEPlayInteractionViewControllerProtocol> container;
@property (nonatomic) AWEPageContext<AWEPlayInteractionBaseContextProtocol><AWEPlayInteractionContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContainer:context:;
- (BOOL)shouldRouterWithParams:;
- (void)executeRouterWithParams:;
- (id)createGoodDetailPayloadWithParams:;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
