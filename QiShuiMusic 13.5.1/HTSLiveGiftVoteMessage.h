@interface HTSLiveGiftVoteMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q msgType;
@property (nonatomic) q voteId;
@property (nonatomic) NSMutableArray resultsArray;
@property (nonatomic) Q resultsArray_Count;
@property (nonatomic) q finishTime;
@property (nonatomic) q currentTime;
@property (nonatomic) q voteType;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
