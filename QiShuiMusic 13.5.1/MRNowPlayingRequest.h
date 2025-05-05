@interface MRNowPlayingRequest : NSObject
@property (nonatomic) MRDestination destination;
- (id)init;
- (id)initWithDestination:;
- (id)initWithPlayerPath:;
- (id)destination;
- (id)initWithOrigin:;
- (void).cxx_destruct;
- (void)triggerAudioFadeOutForNowPlayingApplicationWithReplyQueue:completion:;
- (void)triggerAudioFadeInWithReplyQueue:completion:;
- (void)requestIsPlayingOnQueue:completion:;
- (void)requestPlaybackStateOnQueue:completion:;
- (void)requestNowPlayingItemMetadataOnQueue:completion:;
- (void)requestNowPlayingItemLanguageOptionsOnQueue:completion:;
- (void)requestNowPlayingItemArtworkOnQueue:completion:;
- (void)requestNowPlayingInfoOnQueue:completion:;
- (void)requestSupportedCommandsOnQueue:completion:;
- (void)requestShuffleAndRepeatModeOnQueue:completion:;
- (void)requestProxiableSupportedCommandsOnQueue:completion:;
- (void)requestLastPlayingDateOnQueue:completion:;
- (void)requestDeviceLastPlayingDateOnQueue:completion:;
- (void)requestClientPropertiesOnQueue:completion:;
- (void)nowPlayingPlayerPathOnQueue:completion:;
- (void)sendCommand:options:queue:completion:;
- (void)sendCommand:options:appOptions:queue:completion:;
+ (void)shouldUseQuickControlsToDisplayPlatterForRouteIdentifier:completion:;
+ (void)homePlatterPreferredRouteIdentifier:;
@end
