@interface HTSLiveBattleTeamTaskMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) TeamTask teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (nonatomic) NSString teamTaskJson;
+ (id)descriptor;
@end
