@interface AVCPacketRelayDriver : NSObject
- (id)init;
- (void)dealloc;
- (void)startMonitoringFileDescriptor:forConnection:;
- (void)stopMonitoringFileDescriptor:;
+ (id)sharedInstance;
@end
