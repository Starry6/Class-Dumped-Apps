@interface IESECShopPreloadInfoResponse : IESECBaseApiModel
@property (nonatomic) IESECShopPreloadShopInfo shopInfo;
@property (nonatomic) IESECShopTabModel tabInfo;
- (id)tabInfo;
- (void)setShopInfo:;
- (void)setTabInfo:;
- (id)shopInfo;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
