@interface IESLiveSaaSPBBattleTeamTaskMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBTeamTask teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (nonatomic) NSString teamTaskJson;
+ (id)descriptor;
@end
