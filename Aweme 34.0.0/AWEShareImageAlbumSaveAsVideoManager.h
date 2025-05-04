@interface AWEShareImageAlbumSaveAsVideoManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableSaveImageAlbumToVideoWithAweme:;
+ (void)saveImageAlbumToVideoWithAweme:enterFrom:completion:;
+ (void)pureSaveImageAlbumToVideoWithAweme:enterFrom:completion:;
+ (id)localMusicAssetForURL:;
+ (void)p_logErrorWithError:msg:;
+ (void)p_downloadMusicWithMusic:then:;
+ (void)p_logInfoWithMsg:;
+ (id)saveImageAlbumToVideoWithImageAlbumPublishModel:isSilentTask:updateSourceModel:progressHandler:completion:;
+ (id)p_contextPool;
+ (void)p_trackDownloadStatusWithContext:error:isStart:isCancel:;
+ (void)p_handlerTaskDoneWithContext:;
+ (void)p_runFetchAllResourcesStageWithContext:;
+ (void)p_checkPhotoLibraryPermissionThen:;
+ (void)p_downloadImageAbumClipsWithAlbumList:draftId:isMixedSlides:imageSizeRecorder:then:;
+ (void)p_exportImageAbumDataForMultiProjectsWithContext:completion:;
+ (void)p_exportImageAbumData:to:completion:;
+ (void)p_runGenerateMixedSlidesDataWithContext:;
+ (void)p_runGenerateMVEditDataStageWithContext:;
+ (void)p_runGenerateCanvansEditDataStageWithContext:;
+ (void)p_runExportAndSaveStageWithContext:;
+ (void)p_setupForLVAudioFrameWithPublishModel:isMV:editService:then:;
+ (void)p_updateMusicWithPublishModel:editService:completion:;
+ (void)p_downloadAndSaveWithAlbumModel:toFilePath:needSaveVideo:completion:;
@end
