@interface IESLiveInnerPbGiftVoteMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q msgType;
@property (nonatomic) q voteId;
@property (nonatomic) NSMutableArray resultsArray;
@property (nonatomic) Q resultsArray_Count;
@property (nonatomic) q finishTime;
+ (id)descriptor;
@end
