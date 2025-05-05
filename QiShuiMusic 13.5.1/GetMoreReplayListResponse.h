@interface GetMoreReplayListResponse : IESLivePBBaseMessage
@property (nonatomic) GetMoreReplayListResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
