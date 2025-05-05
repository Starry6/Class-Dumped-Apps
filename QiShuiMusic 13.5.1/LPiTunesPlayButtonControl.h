@interface LPiTunesPlayButtonControl : LPPlayButtonControl
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL hasMuteControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)setPlaying:;
- (id)playable;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)buttonPressed:;
- (void)startPlaying;
- (void)resetPlaybackState;
- (BOOL)hasMuteControl;
- (void)mediaRemotePlaybackObserverPlayingItemDidChange:;
- (double)desiredUpdateIntervalForMediaRemotePlaybackObserver:;
- (id)initWithPlaybackInformation:style:theme:;
- (void)updatePlayState;
- (void)startPlaybackForLyricExcerpt;
- (id)createPlaybackQueue;
- (id)mediaPlaybackApplicationID;
- (BOOL)matchesNowPlayingItem;
@end
