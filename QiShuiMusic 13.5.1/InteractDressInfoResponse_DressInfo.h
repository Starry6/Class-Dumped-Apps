@interface InteractDressInfoResponse_DressInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL bannerHasPaid;
@property (nonatomic) NSString ticketPurchaseSchema;
@property (nonatomic) NSString badgeTextConfig;
@property (nonatomic) HTSLiveDressListTextConfig dressListText;
@property (nonatomic) BOOL hasDressListText;
@property (nonatomic) NSMutableArray coverInfoArray;
@property (nonatomic) Q coverInfoArray_Count;
@property (nonatomic) NSMutableArray badgeInfoArray;
@property (nonatomic) Q badgeInfoArray_Count;
+ (id)descriptor;
@end
