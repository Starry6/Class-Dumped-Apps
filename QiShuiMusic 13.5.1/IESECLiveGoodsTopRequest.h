@interface IESECLiveGoodsTopRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString containerRoomID;
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSNumber livePanelHeightPercent;
@property (nonatomic) NSString storeID;
@property (nonatomic) NSString addressInfo;
- (id)containerRoomID;
- (void)setAddressInfo:;
- (id)buildParams;
- (id)entranceInfo;
- (id)livePanelHeightPercent;
- (void)setContainerRoomID:;
- (void)setEntranceInfo:;
- (void)setLivePanelHeightPercent:;
- (id)storeID;
- (void)setStoreID:;
- (void).cxx_destruct;
- (id)addressInfo;
@end
