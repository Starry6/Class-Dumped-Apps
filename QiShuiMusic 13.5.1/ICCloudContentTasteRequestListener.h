@interface ICCloudContentTasteRequestListener : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)setContentTaste:forAlbumStoreID:configuration:withCompletionHandler:;
- (void)setContentTaste:forMediaItem:storeIdentifier:configuration:timeStamp:withCompletionHandler:;
- (void)setContentTaste:forPlaylistGlobalID:configuration:withCompletionHandler:;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:configuration:withCompletionHandler:;
- (void)setContentTaste:forMediaItem:storeIdentifier:timeStamp:withCompletionHandler:;
- (void)setContentTaste:forPlaylistGlobalID:withCompletionHandler:;
- (void)setContentTaste:forAlbumStoreID:withCompletionHandler:;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:withCompletionHandler:;
- (void)_setupContentTasteServiceConnection;
+ (id)sharedCloudContentTasteRequestListener;
@end
