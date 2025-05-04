@interface AWEMiniLunaRequestManager : NSObject
+ (id)getWithURLString:params:modelClass:completion:;
+ (void)requestDirtyWordCheckWithType:content:completion:;
+ (void)requestAutoPlayInfoWithCompletion:;
+ (void)request:responseBlock:completion:;
+ (void)cancelCollectPlaylistWithPlaylistID:completion:;
+ (void)requestPlaylistDetailWithPlaylistID:playlistType:secUserID:cursor:count:onlyNeedMedia:onlyNeedMediaID:completion:;
+ (void)requestCreatedPlaylistWithSecUserID:cursor:count:completion:;
+ (void)requestCreatedPlaylistWithCursor:count:completion:;
+ (void)requestCollectedPlaylistWithSecUserID:cursor:count:completion:;
+ (void)requestCollectedPlaylistWithCursor:count:completion:;
+ (void)requestDailyPlaylistWithCompletion:;
+ (id)postWithURLString:params:modelClass:responseBlock:completionBlock:;
+ (void)createPlaylistWithTitle:isPrivate:trackIDs:completion:;
+ (void)collectPlaylistWithPlaylistID:completion:;
+ (void)updatePlaylistInfoWithPlaylistID:title:desc:picURL:privacyStatus:completion:;
+ (id)baseURL;
@end
