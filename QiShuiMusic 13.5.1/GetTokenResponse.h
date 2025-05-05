@interface GetTokenResponse : IESLivePBBaseMessage
@property (nonatomic) GetTokenResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
