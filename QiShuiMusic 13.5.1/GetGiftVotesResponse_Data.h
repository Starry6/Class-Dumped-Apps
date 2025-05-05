@interface GetGiftVotesResponse_Data : IESLivePBBaseMessage
@property (nonatomic) q serverTime;
@property (nonatomic) NSMutableArray votesArray;
@property (nonatomic) Q votesArray_Count;
@property (nonatomic) q voteType;
- (void)setServerTime:;
- (long long)serverTime;
+ (id)descriptor;
@end
