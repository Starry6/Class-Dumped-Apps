@interface LeaveResponse : IESLivePBBaseMessage
@property (nonatomic) LeaveResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
