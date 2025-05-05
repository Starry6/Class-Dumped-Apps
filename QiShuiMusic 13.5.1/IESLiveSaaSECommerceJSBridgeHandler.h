@interface IESLiveSaaSECommerceJSBridgeHandler : IESLiveSaaSECommerceBasePiperHandler
@property (nonatomic) <IESLiveSaaSRoomService> roomService;
@property (nonatomic) <IESLiveSaaSLoginService> loginService;
@property (nonatomic) <IESLiveSaaSShareService> shareService;
@property (nonatomic) <IESLiveEcommerceSKUInterface> ecommerceSKUService;
- (void)setRoomService:;
- (id)ecommerceSKUService;
- (id)loginService;
- (void)registerHandlerWithBridge:;
- (id)roomService;
- (void)setEcommerceSKUService:;
- (void)setLoginService:;
- (void)setShareService:;
- (id)shareService;
- (void).cxx_destruct;
@end
