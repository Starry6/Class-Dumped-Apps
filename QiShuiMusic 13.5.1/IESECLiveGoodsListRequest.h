@interface IESECLiveGoodsListRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSNumber livePanelHeightPercent;
- (void)setExtraParams:;
- (id)buildParams;
- (id)entranceInfo;
- (id)extraParams;
- (id)livePanelHeightPercent;
- (void)setEntranceInfo:;
- (void)setLivePanelHeightPercent:;
- (void).cxx_destruct;
@end
