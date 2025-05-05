@interface DiamondBuyResult_ResponseExtra : IESLivePBBaseMessage
@property (nonatomic) NSString source;
@property (nonatomic) BOOL iosShowRecharge;
@property (nonatomic) NSString bdturingVerify;
@property (nonatomic) BOOL iapFail;
@property (nonatomic) DiamondBuyResult_IapFailExtraData iapFailExtraData;
@property (nonatomic) BOOL hasIapFailExtraData;
@property (nonatomic) NSString twoFactoryAuthInfo;
+ (id)descriptor;
@end
