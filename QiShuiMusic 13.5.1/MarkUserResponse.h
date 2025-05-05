@interface MarkUserResponse : IESLivePBBaseMessage
@property (nonatomic) MarkUserResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
