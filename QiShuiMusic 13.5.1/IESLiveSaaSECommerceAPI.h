@interface IESLiveSaaSECommerceAPI : HTSLiveApi
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) NSString baseURL;
- (void)bindPickedGoods:userId:toRoomId:callback:;
- (void)cpsTrackBackWithParams:callback:;
- (void)fetchHasConnectedXTWithDouyin:callback:;
- (void)fetchPickedGoodsFor:toRoomId:couponMetaId:entranceInfo:otherParams:callback:;
- (void)fetchPickedGoodsFor:toRoomId:otherParams:callback:;
- (void)fetchShopCartShouldShowFor:toRoomId:callback:;
- (void)request:apiPath:postMethod:parameters:modelClass:monitor:callback:;
- (void)request:postMethod:parameters:modelClass:monitor:callback:;
- (void)trackService:status:extra:;
- (void)uploadImageData:URLString:progress:parameters:monitor:completionHandler:;
- (id)init;
- (void)setBaseURL:;
- (id)baseURL;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
