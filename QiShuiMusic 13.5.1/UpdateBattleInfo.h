@interface UpdateBattleInfo : IESLivePBBaseMessage
@property (nonatomic) q fromUserId;
@property (nonatomic) q toAnchorId;
@property (nonatomic) q curAddScore;
@property (nonatomic) q giftScore;
@property (nonatomic) GPBInt64Int64Dictionary giftMap;
@property (nonatomic) Q giftMap_Count;
@property (nonatomic) q topKillStatus;
@property (nonatomic) GPBInt64Array topKillPeriodConfigArray;
@property (nonatomic) Q topKillPeriodConfigArray_Count;
@property (nonatomic) NSMutableArray buffCardInfosArray;
@property (nonatomic) Q buffCardInfosArray_Count;
+ (id)descriptor;
@end
