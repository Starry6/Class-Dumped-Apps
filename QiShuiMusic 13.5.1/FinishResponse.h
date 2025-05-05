@interface FinishResponse : IESLivePBBaseMessage
@property (nonatomic) FinishResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
