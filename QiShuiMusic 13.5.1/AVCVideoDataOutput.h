@interface AVCVideoDataOutput : NSObject
@property (nonatomic) BOOL isVideoPaused;
@property (nonatomic) BOOL isMediaStalled;
@property (nonatomic) BOOL isVideoDegraded;
@property (nonatomic) BOOL isVideoSuspended;
@property (nonatomic) BOOL isValid;
@property (nonatomic) <AVCVideoDataOutputDelegate> delegate;
@property (nonatomic) {?=@} videoAttributes;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> internalReceiverQueue;
@property (nonatomic) q streamToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setIsValid:;
- (void)setDelegate:;
- (id)delegateQueue;
- (id)delegate;
- (BOOL)isValid;
- (void)setDelegateQueue:;
- (id)videoAttributes;
- (long long)streamToken;
- (BOOL)isVideoPaused;
- (BOOL)isMediaStalled;
- (BOOL)isVideoDegraded;
- (void)setVideoAttributes:;
- (void)setIsVideoPaused:;
- (void)streamOutput:didPause:;
- (void)streamOutput:didStall:;
- (void)streamOutput:didDegrade:;
- (void)streamOutput:didSuspend:;
- (id)initWithStreamToken:delegate:queue:error:;
- (id)internalReceiverQueue;
- (void)setInternalReceiverQueue:;
- (void)setIsVideoDegraded:;
- (void)setIsMediaStalled:;
- (BOOL)isVideoSuspended;
- (void)setIsVideoSuspended:;
- (void)streamOutput:didReceiveSampleBuffer:;
- (void)streamOutputServerDidDie:;
- (void)streamOutputDidBecomeInvalid:;
- (BOOL)parseVideoAttributes:;
@end
