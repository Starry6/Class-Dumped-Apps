@interface VCVirtualTextDevice : NSObject
@property (nonatomic) NSObject<VCMediaStreamDelegate> mediaStreamDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> mediaStreamDelegateQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)start;
- (id)setPause:;
- (id)stop;
- (id)resume;
- (id)pause;
- (id)sendDelegate;
- (void)sendCharacter:;
- (void)sendText:;
- (void)didReceiveText:;
- (BOOL)setStreamConfig:withError:;
- (id)initWithSendDelegate:clientPid:delegate:delegateQueue:;
- (id)mediaStreamDelegate;
- (id)mediaStreamDelegateQueue;
- (void)setMediaStreamDelegate:;
- (void)setMediaStreamDelegateQueue:;
@end
