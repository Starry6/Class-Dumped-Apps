@interface AWEIMPlayStickerDataSource : NSObject
@property (nonatomic) BOOL hadPreloadStickerList;
@property (nonatomic) AWEIMPlayStickerResponseModel stickerModel;
- (id)stickerModel;
- (void)setStickerModel:;
- (BOOL)hadPreloadStickerList;
- (void)setHadPreloadStickerList:;
- (void)p_fetchStickerListWithCompletion:isPreload:;
- (void)p_fetchSocialEffectListIsPrivateChat:withCompletion:;
- (void)p_updateLocalEffect:toTaskStatus:;
- (void)p_asyncTaskUpdateStatus:completion:;
- (id)p_convertEffectPlatformModelToIMModel:;
- (void)p_updateWithModel:withError:;
- (void)p_updateStorage:;
- (id)__storageKey;
- (id)__storageDateKey;
- (id)p_storedStickerModel;
- (void)preloadListIfNeeded;
- (void)reloadStickerList:;
- (void)fetchStickerListWithType:isPrivateChat:completion:;
- (void)reportAsyncTaskWatched:completion:;
- (void)reportAsyncTask:completion:;
- (id)init;
- (void).cxx_destruct;
@end
