@interface GetCandidateStateResult : IESLivePBBaseMessage
@property (nonatomic) GetCandidateStateResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
