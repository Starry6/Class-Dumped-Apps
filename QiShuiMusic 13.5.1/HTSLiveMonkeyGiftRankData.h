@interface HTSLiveMonkeyGiftRankData : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) HTSLiveMonkeyGiftRankData_Rank historyBest;
@property (nonatomic) BOOL hasHistoryBest;
@property (nonatomic) NSInteger keepRecordDays;
@property (nonatomic) NSMutableArray rankListArray;
@property (nonatomic) Q rankListArray_Count;
@property (nonatomic) HTSLiveMonkeyGiftRankData_Rank selfRank;
@property (nonatomic) BOOL hasSelfRank;
@property (nonatomic) BOOL hasMore;
+ (id)descriptor;
@end
