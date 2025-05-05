@interface IESLiveSaaSPushStreamLogger : NSObject
@property (nonatomic) IESLiveSaaSStatsApi statsApi;
@property (nonatomic) Q contentType;
- (id)addlogExtraInfo:;
- (void)logWithDict:;
- (BOOL)monitorReportEnable;
- (void)setStatsApi:;
- (id)statsApi;
- (void)setContentType:;
- (unsigned long long)contentType;
- (void).cxx_destruct;
@end
