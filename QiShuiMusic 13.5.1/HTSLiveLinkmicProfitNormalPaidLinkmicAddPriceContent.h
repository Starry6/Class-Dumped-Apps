@interface HTSLiveLinkmicProfitNormalPaidLinkmicAddPriceContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixAddPriceUserId;
@property (nonatomic) NSString addPriceOpenId;
@property (nonatomic) q addPriceValue;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
- (id)mixAddPriceUserId;
+ (id)descriptor;
@end
