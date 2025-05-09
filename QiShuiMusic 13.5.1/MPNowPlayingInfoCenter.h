@interface MPNowPlayingInfoCenter : NSObject
@property (nonatomic) BOOL supportsArtworkCatalogLoading;
@property (nonatomic) <MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate;
@property (nonatomic) NSString playerID;
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) NSString representedApplicationBundleIdentifier;
@property (nonatomic) <MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
@property (nonatomic) MPNowPlayingContentItem nowPlayingContentItem;
@property (nonatomic) <MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> dataSourceQueue;
@property (nonatomic) NSDictionary nowPlayingInfo;
@property (nonatomic) Q playbackState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPlayerID:;
- (void)setNowPlayingInfo:;
- (void)becomeActive;
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
- (id)playerID;
- (id)init;
- (id)playbackQueueDelegate;
- (void)dealloc;
- (void)invalidatePlaybackQueueWithCompletion:;
- (id)artworkCatalogBlockForContentItem:;
- (void)_onQueue_pushContentItemsUpdate;
- (unsigned long long)playbackState;
- (void)setPlaybackState:;
- (void)setNowPlayingContentItem:;
- (id)_contentItemForIdentifier:alreadyOnDataSourceQueue:;
- (void)_onDataSourceQueue_getContentItemIDsInRange:completion:;
- (void)_becomeActiveIfPossibleWithCompletion:;
- (BOOL)supportsArtworkCatalogLoading;
- (id)lyricsDelegate;
- (id)initWithPlayerPath:;
- (BOOL)isInvalidated;
- (id)representedApplicationBundleIdentifier;
- (id)_contentItemForIdentifier:;
- (id)_contentItemIDsInRange:itemsRange:;
- (id)_onQueue_stateDictionary;
- (void)setPlaybackQueueDelegate:;
- (void)_onQueue_registerLyricsDelegateCallbacks:;
- (void)setLyricsDelegate:;
- (id)nowPlayingInfo;
- (void)resignActiveSystemFallback;
- (id)_onDataSourceQueue_artworkCatalogForContentItem:;
- (void)setDataSourceQueue:;
- (id)_artworkCatalogForContentItem:;
- (void)setPlaybackQueueDataSource:;
- (void)_becomeActiveWithCompletion:;
- (id)_createPlaybackQueueForRequest:;
- (void)_getTransportablePlaybackSessionRepresentationWithIdentifier:preferredSessionType:completion:;
- (void)_initializeNowPlayingInfo;
- (void).cxx_destruct;
- (void)_getMetadataForContentItem:completion:;
- (id)dataSourceQueue;
- (id)_childContentItemForContentItem:index:;
- (void)becomeActiveSystemFallback;
- (id)playerPath;
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:;
- (void)_onQueue_pushNowPlayingInfoAndRetry:;
- (void)_invalidatePlaybackQueueImmediatelyWithCompletion:;
- (void)invalidate;
- (id)playbackQueueDataSource;
- (id)nowPlayingContentItem;
- (void)invalidatePlaybackQueue;
- (void)_contentItemChangedNotification:;
- (void)setRepresentedApplicationBundleIdentifier:;
+ (id)defaultCenter;
+ (id)serviceQueue;
+ (id)infoCenterForPlayerPath:;
+ (id)infoCenterForPlayerID:;
@end
