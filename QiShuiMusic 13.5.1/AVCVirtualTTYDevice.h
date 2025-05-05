@interface AVCVirtualTTYDevice : NSObject
@property (nonatomic) <AVCVirtualTTYDeviceDelegate> delegate;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (id)delegate;
- (void)terminateSession;
- (id)sendCharacter:;
- (BOOL)sendText:;
- (void)registerBlocksForDelegateNotifications;
- (void)deregisterBlocksForDelegateNotifications;
- (id)initWithMode:error:;
- (id)initWithStreamToken:error:;
- (id)initWithMode:error:streamToken:;
@end
