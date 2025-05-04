@interface AWEShareUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isPlatformAvailable:;
+ (BOOL)isPlatformInstalled:;
+ (BOOL)openAppWithPlatform:;
+ (void)openAppWithPlatform:completion:;
+ (BOOL)isDisplayingSharePanel;
+ (void)shortenURL:persistent:completion:;
+ (id)linkStringFormatWithSplitWord:description:urlString:;
+ (BOOL)enableGetPasteboard;
+ (void)syncPasteboardChangeCount;
+ (void)trackGetPasteboardString:error:;
+ (void)readMarkImage:completion:;
+ (BOOL)detectSelfReflowFromPhotoAlbumIfNeeded:;
+ (void)clearDownloadCache;
+ (id)getShareChannelResourceMetric;
+ (id)pasteboardChangeCountQueue;
+ (void)showNoAlbumPermissionAlertWithCancelHandler:confirmHandler:;
+ (id)textByTruncatingText:withMaxLength:;
+ (BOOL)pasteboardHasChanged;
+ (BOOL)pasteboardHasChangeInSpecifiedQueue;
@end
