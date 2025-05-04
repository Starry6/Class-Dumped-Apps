@interface AWEImageAlbumWorkspaceAdapter : NSObject
+ (void)upgradeOldImageAlbumToWorkSpaceIfNeed:completion:;
+ (void)adapterImageAlbumRepositoryIfNeed:draft:completion:;
+ (id)projectFromImageItemModel:oldPublishModel:workSpace:index:;
+ (void)covertImageItemModelFromImageItem:toProject:;
+ (void)covertImageItemCropFromImageItem:toProject:;
+ (void)covertImageItemHDRModelFromImageItem:toProject:;
+ (void)covertImageItemFilterModelFromImageItem:toProject:;
+ (void)covertImageItemStickerModelFromImageItem:toProject:;
+ (id)getVideoPlayerSize;
+ (id)transToVerticesWithRect:size:;
+ (void)transferMultiProjects:toMainPublishModel:;
+ (void)loadProjectsWithUUIDs:originWorkspace:draft:completion:;
+ (id)imageInputInfoMakeWithImageFilePath:backupImageFilePath:taskId:;
+ (void)covertImageItemModelFromProject:toImageItem:currentMaxUniqueId:;
+ (void)covertImageItemHDRModelFromProject:toImageItem:;
+ (void)covertImageItemFilterModelFromProject:toImageItem:;
+ (void)covertImageItemStickerModelFromProject:toImageItem:currentMaxUniqueId:;
+ (id)textStickerStorageModelFromVideoStciker:;
+ (id)imageStickerModelFromVideoSticker:imageItemModel:project:;
+ (id)getImageStickerBoundBoxWithVideoSticker:imageLayerSize:videoData:stickerProps:;
+ (void)degradeWorkSpaceToOldImageAlbumIfNeed:draft:completion:;
@end
