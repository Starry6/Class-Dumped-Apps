@interface HTSLivePaidBusinessData : IESLivePBBaseMessage
@property (nonatomic) q retType;
@property (nonatomic) q duration;
@property (nonatomic) NSInteger delivery;
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger idType;
@property (nonatomic) q ticketId;
@property (nonatomic) q ticketSkuId;
@property (nonatomic) GPBInt64EnumDictionary entityRels;
@property (nonatomic) Q entityRels_Count;
@property (nonatomic) NSInteger purchasePaidLiveType;
@property (nonatomic) q asyncAuthenticationOperate;
@property (nonatomic) q parentTicketId;
@property (nonatomic) NSInteger purchaseType;
+ (id)descriptor;
@end
