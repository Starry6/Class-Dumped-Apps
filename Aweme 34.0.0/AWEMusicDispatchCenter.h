@interface AWEMusicDispatchCenter : NSObject
@property (nonatomic) RxMultipleDelegate<AWEMusicDispatchCollectionProtocol> collectionCenter;
@property (nonatomic) RxMultipleDelegate<AWEMusicDispatchPlaylistProtocol> playlistCenter;
@property (nonatomic) RxMultipleDelegate<AWEMusicDispatchLunaV2Protocol> lunaV2Center;
- (void)setCollectionCenter:;
- (void)setPlaylistCenter:;
- (void)setLunaV2Center:;
- (id)collectionCenter;
- (id)playlistCenter;
- (id)lunaV2Center;
- (void).cxx_destruct;
+ (void)playlistSongsChangedWithType:playlist:changeModels:isMiniLuna:from:;
+ (void)playlistModelChangedWithType:changeModels:from:;
+ (void)addPlaylistObserver:;
+ (void)modelCollectionTypeChanged:;
+ (void)addCollectionObserver:;
+ (id)collectionCenter;
+ (id)playlistCenter;
+ (void)postPlaylistSongsChangedNotificationWithType:playlist:changeModels:isMiniLuna:;
+ (void)lunaV2Update:isFromCache:;
+ (void)removeCollectionObserver:;
+ (void)removePlaylistObserver:;
+ (void)addLunaV2Observer:;
+ (void)removeLunaV2Observer:;
+ (id)shared;
@end
