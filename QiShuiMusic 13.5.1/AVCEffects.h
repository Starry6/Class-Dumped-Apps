@interface AVCEffects : NSObject
@property (nonatomic) <AVCEffectsDelegate> delegate;
@property (nonatomic) NSInteger mode;
@property (nonatomic) NSInteger effectType;
- (int)effectType;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)initWithDelegate:;
- (int)mode;
- (void)setMode:;
- (void)setEffectType:;
- (void)encodeProcessedVideoFrame:;
- (BOOL)setupRemoteReceiverQueueWithSenderQueue:;
- (void)remoteQueueOperationHandlerWithError:operation:;
- (void)flushRemoteQueue;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (void)avcVideoFrameDidRelease:;
- (BOOL)enqueueSampleBuffer:time:;
@end
