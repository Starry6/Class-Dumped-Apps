@interface GetGiftVotesResponse_Vote : IESLivePBBaseMessage
@property (nonatomic) q voteID;
@property (nonatomic) q remainTime;
@property (nonatomic) NSString voteId;
@property (nonatomic) NSMutableArray resultsArray;
@property (nonatomic) Q resultsArray_Count;
@property (nonatomic) q finishTime;
@property (nonatomic) q currentTime;
@property (nonatomic) q status;
@property (nonatomic) q voteType;
@property (nonatomic) q userCount;
- (long long)remainTime;
- (void)setRemainTime:;
- (long long)voteID;
- (id)initWithMessage:;
+ (id)descriptor;
@end
