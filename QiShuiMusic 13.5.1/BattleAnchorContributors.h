@interface BattleAnchorContributors : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray ranksArray;
@property (nonatomic) Q ranksArray_Count;
@property (nonatomic) q totalCount;
@property (nonatomic) NSMutableArray buffCardInfosArray;
@property (nonatomic) Q buffCardInfosArray_Count;
+ (id)descriptor;
@end
