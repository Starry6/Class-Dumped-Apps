@interface AWEPOIUGCImageAlbumUtil : NSObject
+ (id)getEditVCWithPublishModel:;
+ (id)showEditVCWithPublishModel:index:controllerTag:transitioningDelegate:;
+ (void)trasferToImageAlbumModeWithPublishModel:assets:complete:;
+ (id)showEditVCWithPublishModel:index:transitioningDelegate:;
+ (void)trasferToImageAlbumModeWithPublishModel:complete:;
+ (void)transferToInfiniImageAlbumModeWithPublishModel:albumAssets:complete:;
@end
