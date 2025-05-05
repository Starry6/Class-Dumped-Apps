@interface VSAnalyticsServiceConnection : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)serviceWithErrorHandler:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
@end
