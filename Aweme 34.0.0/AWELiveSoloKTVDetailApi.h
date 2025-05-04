@interface AWELiveSoloKTVDetailApi : HTSLiveApi
- (void)handleWithResponse:error:event:requestTimestamp:;
- (void)fetchDetailSongInfoWithSongId:completion:;
- (void)fetchVideoListWithParams:completion:;
- (void)requestFavoriteMusic:completion:;
@end
