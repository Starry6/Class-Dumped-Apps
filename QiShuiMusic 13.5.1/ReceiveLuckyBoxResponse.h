@interface ReceiveLuckyBoxResponse : IESLivePBBaseMessage
@property (nonatomic) ReceiveLuckyBoxResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
