@interface CUAudioPlayer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) I flags;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)setLabel:;
- (id)label;
- (void)_activate;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (unsigned int)flags;
- (void)activate;
- (void)_processRequests;
- (void)audioSessionInterrupted:;
- (void)audioPlayerDidFinishPlaying:successfully:;
- (void)audioPlayerDecodeErrorDidOccur:error:;
- (void)invalidateWithFlags:;
- (void)_invalidateWithFlags:;
- (void)playPreparedIdentifier:completion:;
- (void)_playPreparedIdentifier:completion:;
- (void)playURL:completion:;
- (void)_playURL:completion:;
- (void)prepareURL:identifier:completion:;
- (void)_prepareURL:identifier:completion:;
- (void)_completeRequest:error:;
- (void)_abortRequestsWithError:;
@end
