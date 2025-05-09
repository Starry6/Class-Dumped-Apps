@interface AWELivePreStreamPreloadManager : NSObject
@property (nonatomic) HTSLiveRoom preloadLiveRoom;
@property (nonatomic) double liveRoomTimeInterval;
@property (nonatomic) NSNumber preloadRoomId;
@property (nonatomic) <IESLiveHTTPTask> preloadTask;
@property (nonatomic) @? innerUpdateLiveRoom;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) NSNumber currentRoomId;
@property (nonatomic) @? updateLiveRoom;
- (id)preloadTask;
- (void)setPreloadTask:;
- (id)updateLiveRoom;
- (void)setCurrentRoomId:;
- (id)currentRoomId;
- (void)preloadRoomWithRoomId:;
- (void)validPreloadData;
- (void)fetchRoomWithRoomId:complete:;
- (void)setInnerUpdateLiveRoom:;
- (void)p_preloadRoomWithRoomId:;
- (void)setPreloadRoomId:;
- (void)setPreloadLiveRoom:;
- (void)setUpdateLiveRoom:;
- (BOOL)canUsePreloadData;
- (void)p_refreshRefreshRoomWithRoomId:;
- (double)liveRoomTimeInterval;
- (double)liveRoomTimeToleration;
- (id)innerUpdateLiveRoom;
- (id)preloadLiveRoom;
- (id)preloadRoomId;
- (void)updatePreloadData:error:;
- (void)setLiveRoomTimeInterval:;
- (BOOL)isOnFetchData;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (BOOL)isFetching;
- (void)setIsFetching:;
- (double)currentTimeInterval;
- (void)clean;
@end
