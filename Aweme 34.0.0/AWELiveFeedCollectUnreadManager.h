@interface AWELiveFeedCollectUnreadManager : NSObject
@property (nonatomic) NSMutableDictionary storeLiveFeeds;
@property (nonatomic) NSMutableDictionary tempReadFeeds;
@property (nonatomic) NSMutableDictionary storeTrackExtra;
- (void)appendLiveFeedsWithEnterFrom:withFeedList:withTrackExtra:;
- (void)readLiveFeedWithEnterFrom:withRoomID:;
- (void)refreshPostUnreadRoomsWithEnterFrom:;
- (void)quitInnerFeedPostUnreadRoomsWithEnterFrom:;
- (void)addNotification;
- (void)setStoreLiveFeeds:;
- (void)setTempReadFeeds:;
- (void)setStoreTrackExtra:;
- (void)postLocalCacheUnreadRooms;
- (id)storeTrackExtra;
- (id)storeLiveFeeds;
- (id)tempReadFeeds;
- (void)postUnreadRoomsWithEnterFrom:withIsRefresh:;
- (id)enterFromReflectChannelId:;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
+ (id)sharedManager;
@end
