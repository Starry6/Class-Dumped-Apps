@interface PropReportResponse : IESLivePBBaseMessage
@property (nonatomic) PropReportResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
