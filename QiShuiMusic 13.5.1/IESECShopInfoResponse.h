@interface IESECShopInfoResponse : IESECBaseApiModel
@property (nonatomic) IESECShopBasicInfoModel basicInfo;
@property (nonatomic) IESECShopAccountInfoModel accountInfo;
@property (nonatomic) IESECStoreListInfo storeListInfo;
@property (nonatomic) IESECShopConfigInfoModel configInfo;
@property (nonatomic) IESECShopMediaInfoModel mediaInfo;
@property (nonatomic) IESECShopHeaderStyleInfo headerStyleInfo;
@property (nonatomic) NSDictionary logExtra;
- (id)headerStyleInfo;
- (id)basicInfo;
- (id)logExtra;
- (void)setBasicInfo:;
- (void)setHeaderStyleInfo:;
- (void)setLogExtra:;
- (void)setStoreListInfo:;
- (id)storeListInfo;
- (id)accountInfo;
- (void)setAccountInfo:;
- (void).cxx_destruct;
- (id)configInfo;
- (id)mediaInfo;
- (void)setMediaInfo:;
- (void)setConfigInfo:;
@end
