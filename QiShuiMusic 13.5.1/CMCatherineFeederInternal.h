@interface CMCatherineFeederInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startDaemonConnection;
- (void)_feedCatherine:confidence:timestamp:;
@end
