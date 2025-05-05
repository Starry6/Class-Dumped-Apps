@interface KickOutResponse : IESLivePBBaseMessage
@property (nonatomic) KickOutResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
