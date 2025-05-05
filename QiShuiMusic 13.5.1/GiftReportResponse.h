@interface GiftReportResponse : IESLivePBBaseMessage
@property (nonatomic) GiftReportResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
