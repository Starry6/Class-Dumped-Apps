@interface IESECLiveGoodsPriceBuilder : NSObject
@property (nonatomic) <IESECLiveGoodsPriceModel> priceModel;
- (id)minSalePriceStr;
- (id)initWithPriceModel:;
- (id)maxSalePrice;
- (id)minSalePrice;
- (id)originPrice;
- (id)priceModel;
- (id)pricePrefix;
- (void)setPriceModel:;
- (void).cxx_destruct;
@end
