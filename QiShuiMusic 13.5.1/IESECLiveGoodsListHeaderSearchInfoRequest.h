@interface IESECLiveGoodsListHeaderSearchInfoRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) NSNumber livePanelHeightPercent;
- (id)buildParams;
- (id)entranceInfo;
- (id)livePanelHeightPercent;
- (void)setEntranceInfo:;
- (void)setLivePanelHeightPercent:;
- (void).cxx_destruct;
@end
