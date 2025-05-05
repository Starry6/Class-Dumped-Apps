@interface BizStartResponse : IESLivePBBaseMessage
@property (nonatomic) BizStartResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
