@interface MPPlayableContentManager : NSObject
@property (nonatomic) MPPlayableContentManagerContext context;
@property (nonatomic) <MPPlayableContentDataSource> dataSource;
@property (nonatomic) <MPPlayableContentDelegate> delegate;
@property (nonatomic) NSArray nowPlayingIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadData;
- (void)sessionDidDisconnect:;
- (void)setDataSource:;
- (id)init;
- (void)sessionDidConnect:;
- (void)beginUpdates;
- (void)dealloc;
- (void)endUpdates;
- (id)context;
- (void)setDelegate:;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)_init;
- (void)setContext:;
- (void)_contentItemChangedNotification:;
- (void)_limitedUIChanged:;
- (void)_browsableContentEndpointChanged:;
- (void)setNowPlayingIdentifiers:;
- (void)_enqueueArtworkUpdate:withCompletion:;
- (void)_enqueueArtworkUpdate:size:withCompletion:;
- (void)_setupMediaRemoteEndpoint;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_pushContentItemsUpdate;
- (void)_handlePlaybackInitializationCompletedWithContext:error:;
- (BOOL)_contentItemWasSentToMediaRemote:;
- (BOOL)_onQueueContentItemWasSentToMediaRemote:;
- (void)_markContentItemsAsSentToMediaRemote:;
- (BOOL)_musicListsLimited;
- (BOOL)_areContentLimitsEnforced;
- (void)_updateSupportedAPIs;
- (void)_scheduleUpdateSupportedAPIs;
- (id)nowPlayingIdentifiers;
+ (id)sharedContentManager;
+ (BOOL)_deviceIsCarplayCapable;
@end
