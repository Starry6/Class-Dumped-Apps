@interface SSEventMonitor : NSObject
@property (nonatomic) <SSEventMonitorDelegate> delegate;
- (void)_handleMessage:fromServerConnection:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)_connectEventConnection;
@end
