@interface HTSLiveMemberGoal : IESLivePBBaseMessage
@property (nonatomic) BOOL isSetGoal;
@property (nonatomic) q initialMemberCount;
@property (nonatomic) q targetMemberCount;
@property (nonatomic) q currentMemberCount;
@property (nonatomic) NSString operateTip;
@property (nonatomic) NSString goalId;
+ (id)descriptor;
@end
