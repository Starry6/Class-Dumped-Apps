@interface IESECLiveGoodsPopRequest : IESECLiveAPIBaseRequest
@property (nonatomic) q popType;
@property (nonatomic) NSString entranceInfo;
- (long long)popType;
- (id)buildParams;
- (id)entranceInfo;
- (void)setEntranceInfo:;
- (void)setPopType:;
- (void).cxx_destruct;
@end
