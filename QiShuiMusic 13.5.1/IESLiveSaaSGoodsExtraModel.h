@interface IESLiveSaaSGoodsExtraModel : BDDynamicMTLModel
@property (nonatomic) NSString notAvailableReason;
@property (nonatomic) double operateTime;
@property (nonatomic) NSString showNotice;
@property (nonatomic) NSString couponThresholdPrice;
@property (nonatomic) NSString hasDiscount;
@property (nonatomic) NSString originID;
@property (nonatomic) NSString originType;
@property (nonatomic) NSString trackExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)operateTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
