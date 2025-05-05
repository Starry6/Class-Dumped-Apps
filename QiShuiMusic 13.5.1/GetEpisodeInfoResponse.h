@interface GetEpisodeInfoResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveEpisode data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
