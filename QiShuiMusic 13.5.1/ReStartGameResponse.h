@interface ReStartGameResponse : IESLivePBBaseMessage
@property (nonatomic) ReStartGameResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
