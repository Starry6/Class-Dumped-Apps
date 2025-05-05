@interface PermitResponse : IESLivePBBaseMessage
@property (nonatomic) PermitResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
