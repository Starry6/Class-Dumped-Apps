@interface IESLiveSaaSFansGroupJSBridgeHandler : NSObject
@property (nonatomic) <IESLiveFansGroupAction> actionCreator;
@property (nonatomic) <IESLiveSaaSIMService> imService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionCreator;
- (void)registerHandlerWithBridge:;
- (void)setActionCreator:;
- (void).cxx_destruct;
- (id)imService;
- (void)setImService:;
@end
