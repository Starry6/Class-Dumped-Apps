@interface AWEIMAttachmentRefreshAssetStage : AWEIMStage
- (BOOL)isSupportRefreshWithMessageType;
- (void)p_trackRefreshAssetFinishWithEvent:context:;
- (void)p_markError;
- (void)startUploadProgressWithContextIfNeed:;
- (id)p_mediaTypeWithContext:;
- (void)start;
+ (id)getCoverAttachmentObjectWithSendObject:;
+ (id)getCoverDBModelWithSendContext:;
+ (void)updateAttachmentDataInfoWithContext:loadContext:attachObject:dbModel:completion:;
+ (id)getAssetAttachmentObjectWithSendObject:;
+ (id)getAssetDBModelWithSendContext:;
+ (void)updateLivePhotoAttachmentWithLoad:loadContext:completion:;
+ (id)getVideoQuickAttachmentObjectWithSendObject:;
+ (id)getVideoQuickDataDBModelWithSendContext:;
+ (void)updateVideoFirstFrameWithContext:loadContext:attachment:dbModel:completion:;
+ (void)updateVideoAttachmentWithContext:loadContext:attachment:dbModel:completion:;
+ (void)updateImageAttachmentWithLoadContext:sendObj:attachment:dbModel:completion:;
+ (void)updateVideoCoverWithContext:loadContext:sendObj:attachment:completion:;
+ (void)writeDataToDiskWithData:relativeFilePath:completion:;
+ (void)updateMessageLocalExtWithMessageId:conversationId:filePathInfo:completion:;
+ (BOOL)isSendAssetWithFileType:;
+ (BOOL)isCoverWithFileType:;
@end
