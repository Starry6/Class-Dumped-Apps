@interface AWEPOIPhotosPreviewHelper : NSObject
+ (void)showPhotosPreviewerWithParams:;
+ (void)showPhotosPreviewerForImages:currentIndex:titles:allowLoop:enableDownload:enableDragDismiss:fromPresenter:delegate:;
+ (void)showPhotosPreviewerForImages:currentIndex:fromPresenter:delegate:;
@end
