@interface ReportCommitResponse : IESLivePBBaseMessage
@property (nonatomic) ReportCommitResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) ReportCommitResponse_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
