@interface BizEndResponse : IESLivePBBaseMessage
@property (nonatomic) BizEndResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
