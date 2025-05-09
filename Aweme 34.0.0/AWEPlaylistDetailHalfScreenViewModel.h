@interface AWEPlaylistDetailHalfScreenViewModel : NSObject
@property (nonatomic) NSString playlistID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) AWEMusicPlayerQueue queue;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL needPlaylistInfo;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) <AWEPlaylistDetailHalfScreenViewModelDelegate> delegate;
@property (nonatomic) NSArray songList;
@property (nonatomic) AWEPlaylistInfoModel playlistInfo;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserID;
- (void)setSecUserID:;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (void)setPlaylistID:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (BOOL)hasMoreOfScene:;
- (void)loadMoreScene:responseBlock:completion:;
- (void)filterModelsWithModels:handler:;
- (void)playlistModelChangedWithType:changeModels:from:;
- (id)queueHandler;
- (id)songList;
- (void)loadMoreCompletion:;
- (void)queueHandler:changedOf:scene:;
- (void)setSongList:;
- (id)initWithPlaylistId:secUserID:;
- (double)musicCellHeight;
- (void)setNeedPlaylistInfo:;
- (id)p_getCoverPicURL;
- (BOOL)needPlaylistInfo;
- (id)p_getPlayerList:;
- (void)refreshCollectStatusWithCompletion:;
- (double)musicHeaderHeight;
- (id)filterForQueueWithModels:;
- (void)changeCollectStatusWithBlock:;
- (id)p_getQueueName;
- (id)cursor;
- (id)delegate;
- (void)setQueue:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)networkReachable;
- (id)queue;
- (void)setDelegate:;
- (id)playlistID;
- (id)loadCount;
@end
