@interface IESECLiveTaskCompletedReportRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString url;
@property (nonatomic) NSString taskEvent;
@property (nonatomic) NSString taskPath;
- (id)buildParams;
- (void)setTaskEvent:;
- (void)setTaskPath:;
- (id)taskEvent;
- (id)taskPath;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
@end
