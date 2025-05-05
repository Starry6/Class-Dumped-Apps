@interface StandardMoney : IESLivePBBaseMessage
@property (nonatomic) q money;
@property (nonatomic) NSString currencyName;
@property (nonatomic) NSString currencyCharacter;
@property (nonatomic) NSString moneyStr;
+ (id)descriptor;
@end
