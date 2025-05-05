@interface HTSLiveTicketData_TicketSkuDetail : IESLivePBBaseMessage
@property (nonatomic) NSInteger ticketType;
@property (nonatomic) NSString ticketName;
@property (nonatomic) q startSellTime;
@property (nonatomic) q closingSellTime;
@property (nonatomic) NSInteger sellStatus;
@property (nonatomic) HTSLiveTicketData_PaidLivePriceInfoV2 priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (nonatomic) HTSLiveTicketData_PaidLivePriceInfoV2 douPriceInfo;
@property (nonatomic) BOOL hasDouPriceInfo;
@property (nonatomic) q skuId;
+ (id)descriptor;
@end
