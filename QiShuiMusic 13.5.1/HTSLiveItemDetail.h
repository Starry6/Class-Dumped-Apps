@interface HTSLiveItemDetail : IESLivePBBaseMessage
@property (nonatomic) NSInteger orderType;
@property (nonatomic) NSInteger itemType;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString itemSku;
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString itemIconUri;
@property (nonatomic) NSString description_p;
@property (nonatomic) NSString isForbidRefund;
@property (nonatomic) q refundStartTime;
@property (nonatomic) q refundEndTime;
@property (nonatomic) q saleRefundStartTime;
@property (nonatomic) q saleRefundEndTime;
@property (nonatomic) q validity;
@property (nonatomic) q validStartTime;
@property (nonatomic) q validEndTime;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString extra;
@property (nonatomic) GPBInt32ObjectDictionary platformPriceList;
@property (nonatomic) Q platformPriceList_Count;
@property (nonatomic) HTSLiveMarkDetail markInfo;
@property (nonatomic) BOOL hasMarkInfo;
@property (nonatomic) HTSLiveImage itemIcon;
@property (nonatomic) BOOL hasItemIcon;
@property (nonatomic) q itemSaleType;
+ (id)descriptor;
@end
