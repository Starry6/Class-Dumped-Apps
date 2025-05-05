@interface GetGroupVoteResponse : IESLivePBBaseMessage
@property (nonatomic) GetGroupVoteResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
