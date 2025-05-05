@interface GetAdminListExtra : IESLivePBBaseMessage
@property (nonatomic) NSInteger adminMaxCount;
@property (nonatomic) NSInteger promptMaxCount;
@property (nonatomic) NSInteger promptCurrCount;
+ (id)descriptor;
@end
