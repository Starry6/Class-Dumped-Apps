@interface AWEPOIInfiniUGCImageAlbumUtil : NSObject
+ (id)firstImageWithPublishModel:index:;
+ (id)getEditVCWithPublishModel:;
+ (id)showEditVCWithPublishModel:index:controllerTag:transitioningDelegate:;
+ (id)__editInputDataWithPublishModel:;
+ (void)trasferToImageAlbumModeWithPublishModel:assets:complete:;
+ (id)showEditVCWithPublishModel:index:transitioningDelegate:;
+ (void)trasferToImageAlbumModeWithPublishModel:complete:;
+ (void)makeInfiniShootPictureCavas:complete:;
+ (id)saveImageToPath:;
+ (void)transferToInfiniImageAlbumModeWithPublishModel:albumAssets:complete:;
@end
