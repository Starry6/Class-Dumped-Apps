@interface HTSLiveBetOption : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString optionName;
@property (nonatomic) q money;
@property (nonatomic) q rate;
@property (nonatomic) BOOL win;
@property (nonatomic) BOOL canBet;
@property (nonatomic) q canBetMoney;
+ (id)descriptor;
@end
