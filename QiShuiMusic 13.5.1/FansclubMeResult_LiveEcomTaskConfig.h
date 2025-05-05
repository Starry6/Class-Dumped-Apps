@interface FansclubMeResult_LiveEcomTaskConfig : IESLivePBBaseMessage
@property (nonatomic) BOOL hasTask;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) q coolingCountdownMs;
+ (id)descriptor;
@end
