@interface RushedListResponse : IESLivePBBaseMessage
@property (nonatomic) RushedListResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
