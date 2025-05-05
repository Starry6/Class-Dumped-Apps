@interface DiamondBuyResult_DiamondBuyData : IESLivePBBaseMessage
@property (nonatomic) NSString orderId;
@property (nonatomic) NSString params;
@property (nonatomic) NSString payType;
+ (id)descriptor;
@end
