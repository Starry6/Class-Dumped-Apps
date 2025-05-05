@interface PropInfoNotifyResponse : IESLivePBBaseMessage
@property (nonatomic) PropInfoNotifyResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
