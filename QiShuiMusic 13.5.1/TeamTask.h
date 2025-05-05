@interface TeamTask : IESLivePBBaseMessage
@property (nonatomic) NSString mixTriggerUserId;
@property (nonatomic) TeamTask_Config config;
@property (nonatomic) BOOL hasConfig;
@property (nonatomic) NSMutableDictionary info;
@property (nonatomic) Q info_Count;
@property (nonatomic) NSString battleId;
@property (nonatomic) NSString triggerOpenId;
- (id)mixTriggerUserId;
+ (id)descriptor;
@end
