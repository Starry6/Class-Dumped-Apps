@interface AWEStickerMusicManager : NSObject
+ (id)localURLForMusic:;
+ (BOOL)musicIsForceBindStickerWithExtra:;
+ (BOOL)insertMusicModelToCache:;
+ (void)setForceBindMusicDownloadFailedWithEffectIdentifier:;
+ (id)fetchtMusicModelFromCache:;
+ (BOOL)getForceBindMusicDownloadFailed:;
+ (BOOL)needToDownloadMusicWithEffectModel:;
+ (void)initializeForceBindMusicDownloadFailed;
@end
