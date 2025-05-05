@interface MFDAMailAccountConsumer : NSObject
- (id)init;
- (void)waitUntilDone;
- (void)setDone:;
- (void).cxx_destruct;
- (void)actionFailed:forTask:error:;
- (id)initWithAlwaysReportFailures:;
- (BOOL)waitUntilDoneBeforeDate:;
- (void)taskFailed:statusCode:error:;
- (BOOL)shouldRetryRequest;
@end
