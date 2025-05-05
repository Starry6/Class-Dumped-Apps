@interface GetLatestBGResponse : IESLivePBBaseMessage
@property (nonatomic) GetLatestBGResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
