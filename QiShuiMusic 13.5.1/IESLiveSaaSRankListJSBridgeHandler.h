@interface IESLiveSaaSRankListJSBridgeHandler : NSObject
@property (nonatomic) <IESLiveSaaSReturnBackRouter> returnRouter;
@property (nonatomic) <IESLiveSaaSContainerRouter> containerRouter;
@property (nonatomic) <IESLiveSaaSFeedDrawerProvider> feedDrawer;
@property (nonatomic) <IESLiveSaaSSquareService> squareService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_enableRankListSlideWithRoomIDs;
- (id)containerRouter;
- (BOOL)_enableRankListSlideWithRoomIDsFeedDrawer;
- (id)feedDrawer;
- (void)prepareForEnterLive:enterMethod:rankType:enterBlock:;
- (void)registerHandlerWithBridge:;
- (id)returnRouter;
- (void)setContainerRouter:;
- (void)setFeedDrawer:;
- (void)setReturnRouter:;
- (void)setSquareService:;
- (id)squareService;
- (void)switchLiveRoom:roomIDs:rank:userID:rankType:enterMethod:;
- (void).cxx_destruct;
@end
