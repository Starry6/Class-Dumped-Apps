@interface GetLinkerUserResponse : IESLivePBBaseMessage
@property (nonatomic) GetLinkerUserResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
