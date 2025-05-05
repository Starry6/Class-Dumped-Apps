@interface OSAHttpSubmitter : OSASubmitter
- (void)abort;
- (id)initWithEndpoint:;
- (void)cleanupConnectionAndDisable:;
- (void)connection:didReceiveData:;
- (void)postContent:withHeaders:;
- (void).cxx_destruct;
- (void)connection:didReceiveResponse:;
- (void)startConnection:;
- (id)submissionURL;
- (void)connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:;
- (void)connectionDidFinishLoading:;
- (void)connection:didFailWithError:;
@end
