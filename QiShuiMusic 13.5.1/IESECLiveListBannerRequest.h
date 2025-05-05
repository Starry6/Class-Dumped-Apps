@interface IESECLiveListBannerRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSNumber everClosedOrder;
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSNumber livePanelHeightPercent;
- (id)everClosedOrder;
- (id)buildParams;
- (id)entranceInfo;
- (id)livePanelHeightPercent;
- (void)setEntranceInfo:;
- (void)setEverClosedOrder:;
- (void)setLivePanelHeightPercent:;
- (void).cxx_destruct;
@end
