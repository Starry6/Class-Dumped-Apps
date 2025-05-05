@interface ApplyResponse : IESLivePBBaseMessage
@property (nonatomic) ApplyResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
