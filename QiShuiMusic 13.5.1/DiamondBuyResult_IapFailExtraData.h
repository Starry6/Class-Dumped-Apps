@interface DiamondBuyResult_IapFailExtraData : IESLivePBBaseMessage
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString toast;
@property (nonatomic) q orderMaxWaitingTime;
+ (id)descriptor;
@end
