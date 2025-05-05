@interface SSVMediaContentTasteController : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)contentTasteTypeForPlaylistGlobalID:;
- (unsigned long long)contentTasteTypeForStoreAdamID:;
- (void)setContentTasteType:forPlaylistGlobalID:withCompletionHandler:;
- (void)setContentTasteType:forStoreAdamID:withContentType:completionHandler:;
- (void)_handleContentTasteItemsUpdateResponse:allowNotifications:;
- (void)_refreshContentTasteItems;
- (void)_contentTasteForItemUpdate:finishedWithError:;
- (void)_retryOperationForItemUpdates:finishedWithError:;
- (BOOL)_isRetryableError:;
- (void)_scheduleContentTasteUpdateOperationForFailedItems;
- (void)_sendUpdateWithItemUpdates:completionHandler:;
+ (id)defaultMediaTasteController;
@end
