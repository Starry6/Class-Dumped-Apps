@interface SAMPQueueState : AceObject
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) SANPVideoAudioAndSubtitleLanguageOptions audioAndSubtitleLanguageOptions;
@property (nonatomic) BOOL currentItemSteerable;
@property (nonatomic) NSDictionary currentListeningToContainer;
@property (nonatomic) SAMPMediaItem listeningToItem;
@property (nonatomic) SAMPMediaItem nextListeningToItem;
@property (nonatomic) SANPCommandInfo nowPlayingCommandInfo;
@property (nonatomic) SAMPNowPlayingQueuePosition playbackQueuePosition;
@property (nonatomic) NSNumber playbackRate;
@property (nonatomic) SAMPMediaItem previousListenedToItem;
@property (nonatomic) NSNumber shuffleEnabled;
@property (nonatomic) NSString source;
@property (nonatomic) NSInteger state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_mediaItemIdURLFromNowPlayingInfo:;
- (id)_mediaTypeFromNowPlayingInfo:;
- (void)_af_setShuffleModeFromNowPlayingInfo:;
- (void)_af_setNowPlayingInfo:;
- (void)_af_validateAndFinalize;
- (id)applicationIdentifier;
- (id)playbackRate;
- (id)groupIdentifier;
- (void)setApplicationIdentifier:;
- (void)setState:;
- (void)setPlaybackRate:;
- (int)state;
- (id)encodedClassName;
- (id)source;
- (void)setSource:;
- (id)listeningToItem;
- (void)setCurrentItemSteerable:;
- (void)setCurrentListeningToContainer:;
- (void)setNextListeningToItem:;
- (void)setShuffleEnabled:;
- (void)setPlaybackQueuePosition:;
- (void)setAudioAndSubtitleLanguageOptions:;
- (void)setPreviousListenedToItem:;
- (void)setListeningToItem:;
- (id)audioAndSubtitleLanguageOptions;
- (BOOL)currentItemSteerable;
- (id)currentListeningToContainer;
- (id)nextListeningToItem;
- (id)nowPlayingCommandInfo;
- (void)setNowPlayingCommandInfo:;
- (id)playbackQueuePosition;
- (id)previousListenedToItem;
- (id)shuffleEnabled;
+ (id)queueState;
+ (id)queueStateWithDictionary:context:;
@end
