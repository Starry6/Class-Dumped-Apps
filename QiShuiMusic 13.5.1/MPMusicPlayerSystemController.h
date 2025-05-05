@interface MPMusicPlayerSystemController : MPMusicPlayerController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)playbackState;
- (void)setUserQueueModificationsDisabled:;
- (id)_queueDescriptor;
- (BOOL)userQueueModificationsDisabled;
- (void)_establishConnectionIfNeeded;
- (id)_nowPlaying;
- (void)openToPlayQueueDescriptor:;
- (BOOL)_shouldAccessCache;
- (void)onSystemServer:;
@end
