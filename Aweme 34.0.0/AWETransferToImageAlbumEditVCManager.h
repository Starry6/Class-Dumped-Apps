@interface AWETransferToImageAlbumEditVCManager : NSObject
+ (void)transferToImageAlbumEditPageWithAssets:publishModel:transitioningDelegate:;
+ (void)continueAddedAssets:selectedAssets:publishModel:successBlock:failedBlock:;
+ (BOOL)enableImageAlbumEditWithAssets:publishModel:;
+ (void)transferToImageAlbumEditPageWithAssets:publishModel:topViewController:transitioningDelegate:;
+ (void)transferToImageAlbumEditPageWithAssets:publishModel:transitioningDelegate:successBlock:failedBlock:cancelBlock:;
+ (void)integrateImageAlbumExportModel:toPublishModel:;
+ (void)transferToImageAlbumEditPageWithAssets:publishModel:topViewController:transitioningDelegate:successBlock:failedBlock:cancelBlock:useTopVCForPresent:;
+ (id)p_contextPool;
+ (void)transferToImageAlbumEditPageWithAssets:publishModel:topViewController:transitioningDelegate:customerOutputHandler:successBlock:failedBlock:cancelBlock:useTopVCForPresent:;
+ (void)reTransformImageAlbumToMvVideoWithImageExportModel:publishModel:transitioningDelegate:successBlock:failedBlock:;
+ (BOOL)p_presentBugFix;
+ (void)transferToImageAlbumEditPageWithAssets:publishModel:topViewController:transitioningDelegate:successBlock:failedBlock:cancelBlock:;
+ (void)transferToImageAlbumEditPageWithResourceEncodeJSONString:publishModel:transitioningDelegate:successBlock:failedBlock:cancelBlock:;
@end
