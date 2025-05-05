@interface MSFetchMetricsController : NSObject
@property (nonatomic) <MSFetchMetricsControllerDataSource> dataSource;
- (void)start;
- (id)initWithDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (void)stopAndSubmitWithOptions:fetchSize:;
@end
