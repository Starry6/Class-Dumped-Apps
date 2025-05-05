@interface SendSignalResponse : IESLivePBBaseMessage
@property (nonatomic) SendSignalResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
