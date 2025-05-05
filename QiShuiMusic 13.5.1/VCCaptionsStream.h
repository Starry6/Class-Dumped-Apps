@interface VCCaptionsStream : VCVideoStream
@property (nonatomic) BOOL captionsSupported;
@property (nonatomic) BOOL captionsEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)captionsEnabled;
- (void)enableCaptions:;
- (void)registerCaptionsEventDelegate:;
- (void)setCaptionsLocale:;
- (BOOL)captionsSupported;
- (id)captionsDelegate;
- (void)onStartWithCompletionHandler:;
- (void)onStopWithCompletionHandler:;
- (void)didReceiveCaptions:;
- (id)initWithTransportSessionID:idsParticipantID:ssrc:streamToken:;
- (BOOL)vcVideoReceiver:didReceiveSampleBuffer:isFirstFrame:;
- (id)dataFromSampleBuffer:;
@end
