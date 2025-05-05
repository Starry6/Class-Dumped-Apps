@interface IESECLiveGoodsListChangeStoreRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString storeID;
@property (nonatomic) NSString addressInfo;
- (void)setAddressInfo:;
- (id)buildParams;
- (id)storeID;
- (void)setStoreID:;
- (void).cxx_destruct;
- (id)addressInfo;
@end
