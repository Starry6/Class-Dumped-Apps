@interface QueryGiftIncomeHistoryReq : IESLivePBBaseMessage
@property (nonatomic) q limit;
@property (nonatomic) q offset;
+ (id)descriptor;
@end
