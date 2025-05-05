@interface ChatResponse : IESLivePBBaseMessage
@property (nonatomic) ChatResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
