@interface AWEACCShareImageAlbumFeedBusinessImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isSlides;
+ (void)setSlides:isImageClip:;
+ (void)showDownloadActionSheetWithIsSingleImage:enterFrom:currentCanDownload:willDismissHandler:resultHandler:;
+ (void)showDownloadActionSheetWithIsSingleImage:enterFrom:willDismissHandler:resultHandler:;
+ (void)showDownloadActionSheetWithIsSingleImage:isSingleLivePhoto:canSaveAsVideo:canSaveAsRenderImage:enterFrom:title:currentCanDownload:willDismissHandler:resultHandler:;
+ (void)showDownloadActionSheetWithIsSingleImage:enterFrom:title:willDismissHandler:resultHandler:;
+ (void)showDownloadActionSheetWithIsSingleImage:enterFrom:title:currentCanDownload:willDismissHandler:resultHandler:;
+ (void)p_trackSelectWithType:enterFrom:isSlides:;
+ (BOOL)isImageClipForSlides;
+ (void)resetSlidesFlag;
+ (void)p_showOldSinglePhotoActionSheetWithWillDismissHandler:resultHandler:;
+ (id)imagePickerController;
@end
