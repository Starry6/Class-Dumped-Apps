@interface AWEPlayInteractionTC21RPStickerController : AWEPlayInteractionBaseController
- (void)p_prepareForDisplay;
- (void)cleanCacheIfNeeded;
- (void)getRPVideoTrackInfoIfNeeded;
- (id)p_redPacketStickerFoler;
- (BOOL)searchFileInCacheDirectory:;
- (void)handleNetData:;
- (id)createDirectoryIfNeeded;
@end
