@interface HTSLiveAnchorPriceInfo : IESLivePBBaseMessage
@property (nonatomic) q currentPrice;
@property (nonatomic) GPBInt64Array priceOptionsArray;
@property (nonatomic) Q priceOptionsArray_Count;
@property (nonatomic) NSString subheading;
@property (nonatomic) q memberLimit;
@property (nonatomic) NSString needAdvancedScript;
@property (nonatomic) q defaultPrice;
+ (id)descriptor;
@end
