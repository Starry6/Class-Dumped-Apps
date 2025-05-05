@interface RushLuckyBoxResponse : IESLivePBBaseMessage
@property (nonatomic) RushLuckyBoxResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
