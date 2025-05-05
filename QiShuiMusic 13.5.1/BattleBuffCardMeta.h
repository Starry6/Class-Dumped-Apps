@interface BattleBuffCardMeta : IESLivePBBaseMessage
@property (nonatomic) NSInteger battleBuffCardType;
@property (nonatomic) NSString effectJson;
@property (nonatomic) q effectStartTimeMs;
@property (nonatomic) q effectDurationMs;
@property (nonatomic) q createTimeMs;
@property (nonatomic) NSString cardExtraInfo;
+ (id)descriptor;
@end
