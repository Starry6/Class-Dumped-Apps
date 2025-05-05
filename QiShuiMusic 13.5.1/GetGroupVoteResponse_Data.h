@interface GetGroupVoteResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray groupVoteGiftsArray;
@property (nonatomic) Q groupVoteGiftsArray_Count;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL showCombo;
+ (id)descriptor;
@end
