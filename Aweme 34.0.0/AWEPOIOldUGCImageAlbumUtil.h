@interface AWEPOIOldUGCImageAlbumUtil : NSObject
+ (id)firstImageWithPublishModel:index:;
+ (id)getEditVCWithPublishModel:;
+ (id)showEditVCWithPublishModel:index:controllerTag:transitioningDelegate:;
+ (id)__editInputDataWithPublishModel:;
+ (void)trasferToImageAlbumModeWithPublishModel:assets:complete:;
+ (id)showEditVCWithPublishModel:index:transitioningDelegate:;
+ (void)trasferToImageAlbumModeWithPublishModel:complete:;
@end
