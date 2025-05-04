@interface AWELivingCellControllerApi : HTSLiveApi
- (void)reportEpisodePVWithEpisodeId:roomId:enterFrom:enterMethod:liveReason:ownerUserId:;
- (id)p_subCameraParams:;
- (void)checkSubCameraStatus:completion:;
@end
