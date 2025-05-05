@interface TicketPanelResponse_TicketPanelData_ShareTicketDetailData : IESLivePBBaseMessage
@property (nonatomic) NSInteger ticketType;
@property (nonatomic) NSString ticketName;
@property (nonatomic) NSString price;
@property (nonatomic) NSString fullPrice;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) q startSellTime;
@property (nonatomic) q closingSellTime;
@property (nonatomic) NSInteger purchaseStatus;
@property (nonatomic) NSInteger sellStatus;
@property (nonatomic) NSString purchasePrice;
@property (nonatomic) NSString orderId;
@property (nonatomic) NSInteger purchaseCount;
@property (nonatomic) q claimDdl;
@property (nonatomic) PriceInfo priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (nonatomic) q limitCount;
@property (nonatomic) q skuId;
@property (nonatomic) NSInteger categoryType;
@property (nonatomic) NSString skuIdStr;
@property (nonatomic) q orderItemType;
@property (nonatomic) NSString orderSkuIdStr;
@property (nonatomic) NSString orderExtra;
+ (id)descriptor;
@end
