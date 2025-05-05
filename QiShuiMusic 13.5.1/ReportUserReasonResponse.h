@interface ReportUserReasonResponse : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) Q dataArray_Count;
@property (nonatomic) ReportUserReasonResponse_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
