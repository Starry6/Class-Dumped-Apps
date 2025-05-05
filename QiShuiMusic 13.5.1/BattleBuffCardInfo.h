@interface BattleBuffCardInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger battleBuffCardType;
@property (nonatomic) NSMutableArray effectiveBuffCardsArray;
@property (nonatomic) Q effectiveBuffCardsArray_Count;
@property (nonatomic) q waitingBuffCardsCount;
@property (nonatomic) q bonusScore;
+ (id)descriptor;
@end
