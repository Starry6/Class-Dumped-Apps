@interface CWFXPCEventProxy : NSObject
@property (nonatomic) <CWFXPCEventProxyDelegate> delegate;
- (id)init;
- (void)receivedAcknowledgedXPCEvent:reply:;
- (void)setDelegate:;
- (void)__acknowledgeEventWithUUID:;
- (id)delegate;
- (void).cxx_destruct;
- (void)receivedXPCEvent:;
@end
