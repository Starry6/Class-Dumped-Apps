@interface IESECRelationPriceAndSalesComponent : UIView
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
@property (nonatomic) UILabel salesLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)preloadObj;
- (id)salesLabel;
- (void)setPreloadObj:;
- (void)setSalesLabel:;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (id)createPreloadCompoentObjectWihtModel:;
+ (id)priceAndSales;
+ (id)priceAndSalesWithConfig:;
@end
