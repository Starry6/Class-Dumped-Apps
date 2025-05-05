@interface AFSiriTether : NSObject
- (id)initWithInstanceContext:;
- (id)_connection;
- (void)attach:;
- (id)init;
- (void)dealloc;
- (void)_connectionInterrupted:;
- (void).cxx_destruct;
- (void)_logEvent:;
- (void)waitForAttachment:;
- (void)setAttachmentStatusChangedHandler:;
- (void)_connectionInvalid:;
- (void)_attach:;
- (void)_attachmentStatusUpdate:;
- (void)_listenForLaunchNotification;
@end
