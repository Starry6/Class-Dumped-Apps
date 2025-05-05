@interface IESECShopLiteGoldPriceBanner : UIView
@property (nonatomic) NSString salesText;
@property (nonatomic) NSString prompt;
@property (nonatomic) NSString coinCountText;
@property (nonatomic) NSString suffix;
@property (nonatomic) <IESECRelationPriceComponentProtocol> priceComponent;
- (id)coinCountText;
- (id)priceComponent;
- (id)salesText;
- (void)setCoinCountText:;
- (void)setPriceComponent:;
- (void)setSalesText:;
- (void)layoutSubviews;
- (id)suffix;
- (void)setPrompt:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSuffix:;
- (id)prompt;
- (void)configureSubviews;
@end
