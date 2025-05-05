@interface IMRemoteURLConnectionMockScheduler : NSObject
- (BOOL)_connect;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleMockResponse:forURL:;
- (void)scheduleMockResponse:;
@end
