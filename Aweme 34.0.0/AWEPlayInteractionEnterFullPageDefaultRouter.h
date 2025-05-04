@interface AWEPlayInteractionEnterFullPageDefaultRouter : NSObject
@property (nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol><AWEPlayInteractionViewControllerProtocol> container;
@property (nonatomic) AWEPageContext<AWEPlayInteractionBaseContextProtocol><AWEPlayInteractionContextProtocol> context;
@property (nonatomic) @? enterFullPageBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateEnterFullPageBlock:;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)initWithContainer:context:;
- (BOOL)shouldRouterWithParams:;
- (void)executeRouterWithParams:;
- (id)enterFullPageBlock;
- (id)createEnterFullPagePayloadWithParams:;
- (void)setEnterFullPageBlock:;
- (id)createLogExtraWithParams:;
- (id)getPriorityType;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (void)appendLogExtra:withParams:;
+ (void)appendLogExtra:withContainer:;
+ (void)appendLogExtra:withContext:;
@end
