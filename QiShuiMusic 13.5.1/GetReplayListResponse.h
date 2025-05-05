@interface GetReplayListResponse : IESLivePBBaseMessage
@property (nonatomic) GetReplayListResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
