@interface IESLiveSaaSUserPreviewJSBHandler : NSObject
@property (nonatomic) <IESLiveSaaSContainerRouter> containerRouter;
@property (nonatomic) <HTSLiveSaaSInteractiveAnchorActions> anchorInteractiveActions;
@property (nonatomic) <IESLiveSaaSInteractiveAdminActions> adminInteractiveActions;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerRouter;
- (id)adminInteractiveActions;
- (id)anchorInteractiveActions;
- (void)registerHandlerWithBridge:;
- (void)setAdminInteractiveActions:;
- (void)setAnchorInteractiveActions:;
- (void)setContainerRouter:;
- (void).cxx_destruct;
@end
