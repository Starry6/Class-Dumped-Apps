@interface EpisodeInfoResponse : IESLivePBBaseMessage
@property (nonatomic) EpisodeInfoResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
