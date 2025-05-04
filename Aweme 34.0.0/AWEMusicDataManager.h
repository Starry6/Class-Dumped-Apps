@interface AWEMusicDataManager : NSObject
+ (void)requestCollectionListWithPlaylistID:userID:cursor:count:scene:completion:;
+ (void)createPlaylistWithTitle:picUrl:des:privacySetting:musicInfo:completion:;
+ (void)requestCollectMusicWithID:videoID:type:completion:;
+ (void)requestCollectAndRecommendMusicWithUserID:cursor:count:recommendCount:onlyRecommend:completion:;
+ (void)requestPlaylistCollectWithPlaylistID:targetCollectionType:completion:;
+ (void)requestFeedListWithFrontIds:playlistID:count:responseBlock:completion:;
+ (void)requestCollectMusicWithID:videoID:scene:type:completion:;
+ (void)requestCollectToLunaMusicID:mediaType:actionType:completion:;
+ (void)requstPlaylistAddSongWithPlaylistID:musicModels:completion:;
+ (void)requestFeedListWithCount:playlistID:completion:;
+ (void)requestFeedListWithFrontIds:count:responseBlock:completion:;
+ (void)requestCollectionListWithUserID:cursor:count:completion:;
+ (void)requestValidCollectionListWithPlaylistID:userID:cursor:count:completion:;
+ (void)createMiniLunaPlaylistWithTitle:isprivate:trackIDs:completion:;
+ (void)requstPlaylistAddSongWithPlaylistID:musicID:videoID:completion:;
+ (void)requestMiniLunaPlaylistCollectWithPlaylistIDs:completion:;
+ (void)requestMiniLunaPlaylistCancelCollectWithPlaylistIDs:completion:;
@end
