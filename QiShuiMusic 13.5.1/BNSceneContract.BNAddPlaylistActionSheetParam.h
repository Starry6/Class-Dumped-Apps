@interface BNSceneContract.BNAddPlaylistActionSheetParam : BNCommonAdapter.BNRouteBasicParam
@property (nonatomic) NSString playlistID;
@property (nonatomic) BOOL isShowCollect;
- (BOOL)isShowCollect;
- (void)setIsShowCollect:;
- (void)setPlaylistID:;
- (id)init;
- (void).cxx_destruct;
- (id)playlistID;
@end
