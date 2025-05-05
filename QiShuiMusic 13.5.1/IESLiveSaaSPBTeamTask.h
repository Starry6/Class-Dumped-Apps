@interface IESLiveSaaSPBTeamTask : GPBMessage
@property (nonatomic) IESLiveSaaSPBTeamTask_Config config;
@property (nonatomic) BOOL hasConfig;
@property (nonatomic) NSMutableDictionary info;
@property (nonatomic) Q info_Count;
@property (nonatomic) NSString battleId;
@property (nonatomic) NSString triggerOpenId;
+ (id)descriptor;
@end
