@interface BattleConsecutiveRecordInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger battleResultType;
@property (nonatomic) q consecutiveCount;
+ (id)descriptor;
@end
