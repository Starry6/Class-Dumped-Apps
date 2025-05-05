@interface HTSLivePurchaseSimpleData : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) q startSellTime;
@property (nonatomic) q closingSellTime;
@property (nonatomic) NSInteger sellStatus;
@property (nonatomic) NSInteger purchaseStatus;
@property (nonatomic) HTSLiveProductPriceStruct priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
+ (id)descriptor;
@end
