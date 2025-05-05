@interface IESECLiveGoodsPriceInfoListModel : IESECLiveApiBaseModel
@property (nonatomic) NSArray priceInfos;
- (id)priceInfos;
- (void)setPriceInfos:;
- (void).cxx_destruct;
+ (id)priceInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
