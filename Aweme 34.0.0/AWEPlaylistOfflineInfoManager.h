@interface AWEPlaylistOfflineInfoManager : NSObject
@property (nonatomic) NSMutableArray onlinePlaylistID;
@property (nonatomic) NSMutableDictionary dataSourceDic;
@property (nonatomic) AWEPlaylistOfflineInfo currentOfflinePlaylistInfo;
- (void)setDataSourceDic:;
- (void)setOnlinePlaylistID:;
- (id)currentOfflinePlaylistInfo;
- (id)getKeyWithWithGroupID:anchorPlaylistID:;
- (id)dataSourceDic;
- (id)p_makeTempPlaylistInfo;
- (void)setCurrentOfflinePlaylistInfo:;
- (id)onlinePlaylistID;
- (id)p_defaultPlaylistTitle;
- (id)p_defaultOwnerInfo;
- (id)p_defaultPlaylistPermission;
- (BOOL)isSongHasSelectedInOfflineSource:;
- (id)getCurrentPlaylistOfflineInfoWithGroupID:anchorPlaylistID:;
- (void)resetOnlinePlaylistInfo;
- (void)deleteOnlinePlaylist;
- (void)addOnlinePlaylistWithID:;
- (void)resetCurrentPlaylistInfo;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
