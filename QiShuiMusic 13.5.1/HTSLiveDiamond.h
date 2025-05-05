@interface HTSLiveDiamond : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString iapId;
@property (nonatomic) NSInteger price;
@property (nonatomic) NSInteger exchangePrice;
@property (nonatomic) NSInteger diamondCount;
@property (nonatomic) NSInteger givingCount;
@property (nonatomic) NSString describe;
@property (nonatomic) NSMutableArray currencyPriceArray;
@property (nonatomic) Q currencyPriceArray_Count;
@property (nonatomic) NSString couponId;
@property (nonatomic) NSInteger discountPrice;
@property (nonatomic) BOOL hideGivingCount;
@property (nonatomic) BOOL isCustomizedDiamond;
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) BOOL hasIconImage;
+ (id)descriptor;
@end
