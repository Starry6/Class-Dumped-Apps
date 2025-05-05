@interface SilenceListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) HTSLiveUser opUser;
@property (nonatomic) BOOL hasOpUser;
@property (nonatomic) q opTime;
+ (id)descriptor;
@end
