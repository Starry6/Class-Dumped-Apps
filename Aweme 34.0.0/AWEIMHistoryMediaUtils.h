@interface AWEIMHistoryMediaUtils : NSObject
+ (id)getMessageBaseViewController;
+ (id)getMessageContainerViewController;
+ (id)p_getMessageBaseViewControllerWithNavigationController:;
+ (id)getVoiceOverDateText:;
+ (id)getVoiceOverTitle:;
+ (id)voiceOverStringFromNumber:;
+ (id)getDateText:;
+ (void)requestImageWith:witchMessage:;
+ (void)requestImageWith:placeHolder:witchMessage:;
+ (void)requestImageWith:placeHolder:witchMessage:customGetBlock:customSaveBlock:;
+ (void)requestUnencryptedMessageWith:placeHolder:message:;
+ (void)p_requestEncryptedImageForCell:message:;
+ (id)imageResourceDownloadModel:;
+ (void)requestEncryptedMessageWith:message:resource:customGetBlock:customSaveBlock:;
+ (void)requestEncryptedMessageWith:message:resource:;
+ (void)setLocalImage:message:filePath:customeSaveBlock:;
+ (void)setLocalImage:message:filePath:;
+ (void)requestEncryptedWebImage:message:resource:;
+ (void)getCacheImageWithEncryptedMessage:mediaCell:completion:;
+ (id)clipAndResizeImageIfNeed:mediaCellSize:;
+ (id)resizeImageIfNeed:mediaCellSize:;
+ (id)stringFromNumber:;
@end
