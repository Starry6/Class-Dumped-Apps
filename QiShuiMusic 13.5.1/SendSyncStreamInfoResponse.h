@interface SendSyncStreamInfoResponse : IESLivePBBaseMessage
@property (nonatomic) SendSyncStreamInfoResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
