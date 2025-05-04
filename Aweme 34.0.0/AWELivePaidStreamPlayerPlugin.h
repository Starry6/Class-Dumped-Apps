@interface AWELivePaidStreamPlayerPlugin : NSObject
@property (nonatomic) <IESLivePlayerProtocol> streamPlayer;
@property (nonatomic) @? playerShouldMuteAfterPromiseHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)paidStreamTrialDidStart:;
- (void)paidStream:didFinishTrialWithReason:;
- (void)paidStream:screenCapturedDidChange:;
- (id)streamPlayer;
- (void)setStreamPlayer:;
- (void)paidStream:didChangeAuthPromiseType:reason:;
- (id)playerShouldMuteAfterPromiseHandler;
- (void)setPlayerShouldMuteAfterPromiseHandler:;
- (id)initWithStreamPlayer:playerShouldMuteAfterPromiseHandler:;
- (void)muteStream;
- (void)setPlayerMuted:videoRendering:;
- (void)unMuteStream;
- (id)initWithStreamPlayer:;
- (void)paidStream:trialRemainingTimeDidChanged:;
- (void).cxx_destruct;
@end
