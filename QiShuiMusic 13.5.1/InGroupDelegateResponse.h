@interface InGroupDelegateResponse : IESLivePBBaseMessage
@property (nonatomic) InGroupDelegateResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
