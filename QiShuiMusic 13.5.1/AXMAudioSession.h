@interface AXMAudioSession : NSObject
@property (nonatomic) NSMutableArray notificationObserverTokens;
@property (nonatomic) AVAudioSession session;
- (void)setSession:;
- (id)init;
- (void)dealloc;
- (id)session;
- (void).cxx_destruct;
- (BOOL)deactivateSessionWithError:;
- (BOOL)activateSessionWithError:;
- (void)_handleSessionInterrupted:options:;
- (id)_stringForRouteChangeReason:;
- (void)_handleRouteChanged:previousRoute:;
- (void)_handleMediaServicesLost;
- (void)_handleMediaServicesReset;
- (void)_handleSilenceSecondaryAudio:;
- (id)notificationObserverTokens;
- (void)setNotificationObserverTokens:;
@end
