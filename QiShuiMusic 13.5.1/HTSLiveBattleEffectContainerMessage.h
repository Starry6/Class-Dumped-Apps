@interface HTSLiveBattleEffectContainerMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q channelId;
@property (nonatomic) q battleId;
@property (nonatomic) NSString battleEffectInfo;
+ (id)descriptor;
@end
