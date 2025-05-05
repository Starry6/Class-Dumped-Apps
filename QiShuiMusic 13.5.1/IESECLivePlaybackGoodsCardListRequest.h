@interface IESECLivePlaybackGoodsCardListRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString entranceInfoJSONString;
@property (nonatomic) NSNumber page;
@property (nonatomic) NSNumber pageSize;
@property (nonatomic) NSString needPageTimestamp;
- (id)buildParams;
- (id)entranceInfoJSONString;
- (id)needPageTimestamp;
- (void)setEntranceInfoJSONString:;
- (void)setNeedPageTimestamp:;
- (id)page;
- (void)setPage:;
- (void).cxx_destruct;
- (id)pageSize;
- (void)setPageSize:;
@end
