@interface IESECLiveLogReportRequest : IESECLiveAPIBaseRequest
@property (nonatomic) q logType;
@property (nonatomic) NSString content;
- (id)buildParams;
- (id)content;
- (void)setContent:;
- (long long)logType;
- (void).cxx_destruct;
- (void)setLogType:;
@end
