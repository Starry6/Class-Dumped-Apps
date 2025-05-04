@interface AWEPublishCoverLogicHandler : NSObject
+ (void)captureFrameAtDependencies:publishViewModel:preferredSize:completion:;
+ (void)calculateCoverSourceWith:completion:;
+ (void)sendCoverInfoMonitoringWithCoverModel:;
+ (void)asyncGetNonBlackFrameAtCoverModel:publishViewModel:dependencies:preferredSize:completion:;
+ (void)enterPublishPageCalculateCoverTimeStampWith:dependencies:completion:;
+ (id)calculateStickerListWith:;
+ (double)templateCalculateCoverTspWith:;
+ (double)stickerCalculateCoverTspWith:;
+ (void)calculateCoverTspWithStickerId:publishViewModel:completion:;
+ (BOOL)detectImageIsPureBlackWithImage:;
+ (BOOL)canDowngradeAndUpdateCoverModel:publishViewModel:;
+ (id)coverBackupConfig;
+ (BOOL)canSupportBackupWith:coverModel:;
+ (BOOL)enable;
@end
