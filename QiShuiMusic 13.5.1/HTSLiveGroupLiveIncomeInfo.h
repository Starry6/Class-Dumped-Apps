@interface HTSLiveGroupLiveIncomeInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q income;
+ (id)descriptor;
@end
