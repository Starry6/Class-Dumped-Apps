@interface CreateInfoResponse : IESLivePBBaseMessage
@property (nonatomic) CreateInfoResponse_CreateInfo data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
