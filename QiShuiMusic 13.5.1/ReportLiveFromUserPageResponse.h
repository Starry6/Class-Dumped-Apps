@interface ReportLiveFromUserPageResponse : IESLivePBBaseMessage
@property (nonatomic) ReportLiveFromUserPageResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) ReportLiveFromUserPageResponse_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
