@interface AWEIMGroupImpl.FriendsAlbumService : HTSService
- (BOOL)isFriendsAlbumReplyMessage:;
- (void)openFriendsAlbumInflowPageWithCon:message:transitionProvider:extraParams:completion:;
- (void)openFriendsAlbumInflowPageWithCon:Asset:assets:transitionProvider:delegate:extraParams:completion:;
- (id)inflowViewControllerForType:;
- (id)currentDisplayMessageForViewController:;
- (void)openFriendsAlbumOutFlowPageWithCon:extraParams:;
- (id)friendsAlbumCacheService;
- (id)friendsAlbumDownloadService;
- (id)friendsAlbumDataController;
- (BOOL)enableFriendsAlbum;
- (id)init;
@end
