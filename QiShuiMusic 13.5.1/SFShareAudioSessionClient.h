@interface SFShareAudioSessionClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? progressHandler;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)init;
- (void)_invalidated;
- (void)_activate:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)initWithCoder:;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)shareAudioProgressEvent:info:;
- (void)userConfirmed;
+ (BOOL)supportsSecureCoding;
@end
