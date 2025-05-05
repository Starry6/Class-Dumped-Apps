@interface TicketPurchaseSimpleData : IESLivePBBaseMessage
@property (nonatomic) NSInteger ticketType;
@property (nonatomic) NSString ticketName;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) q startSellTime;
@property (nonatomic) q closingSellTime;
@property (nonatomic) NSInteger sellStatus;
@property (nonatomic) NSInteger purchaseStatus;
@property (nonatomic) PriceInfo priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
+ (id)descriptor;
@end
