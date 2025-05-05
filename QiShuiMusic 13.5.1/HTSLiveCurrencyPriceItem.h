@interface HTSLiveCurrencyPriceItem : IESLivePBBaseMessage
@property (nonatomic) NSString currency;
@property (nonatomic) NSString priceShowForm;
@property (nonatomic) NSInteger price;
+ (id)descriptor;
@end
