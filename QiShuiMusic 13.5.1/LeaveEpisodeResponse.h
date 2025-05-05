@interface LeaveEpisodeResponse : IESLivePBBaseMessage
@property (nonatomic) LeaveEpisodeResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
