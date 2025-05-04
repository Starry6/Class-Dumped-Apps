@interface AWEFeedECInstantAnchorConfig : AWEFeedTemplateAnchorBaseConfig
@property (nonatomic) BOOL shouldTrackDetailShowWhenAnchorViewShow;
@property (nonatomic) BOOL isUpdatingInfo;
- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (void)willShowDoubleLineStyleWithType:;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (void)didShowDoubleLineStyleAnchor;
- (void)fetchStoreListWithShopId:productId:awemeModel:aweECService:completion:;
- (void)fetchAnchorInfoWithShopId:storeId:subProductId:awemeModel:isFallback:needAddress:aweECService:completion:;
- (void)handleAnchorViewClickedWithAwemeModel:position:;
- (id)BTMParams;
- (id)BTMID;
- (BOOL)shouldTrackDetailShowWhenAnchorViewShow;
- (void)setShouldTrackDetailShowWhenAnchorViewShow:;
- (id)instantBizMap;
- (id)instantBizExtra;
- (void)fetchInstantBizInfoWithAwemeModel:completion:;
- (id)instantBizOpenURL;
- (id)instantBizSubDesc;
- (id)BTMToken;
- (void)trackInstantProductEntranceClickWithAwemeModel:;
- (void)trackInstantProductEntranceShowSubpidWithAwemeModel:;
- (void)trackInstantProductEntranceShowWithAwemeModel:;
- (void)trackInstantProductEntranceShowDetailWithAwemeModel:;
- (void)setIsUpdatingInfo:;
- (BOOL)isUpdatingInfo;
- (id)hostViewController;
@end
