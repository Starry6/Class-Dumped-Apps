@interface AWEIMResendRefreshStage : AWEIMStage
@property (nonatomic) <AWEIMAlbumAssetPreprocessorProtocol> preProcessor;
- (id)preProcessor;
- (void)setPreProcessor:;
- (BOOL)isSupportRefreshWithMessageType;
- (void)p_markError:inConversation:;
- (void)startUploadProgressWithContextIfNeed:dbModel:;
- (void).cxx_destruct;
- (void)start;
+ (void)updateLivePhotoAttachmentWithLoad:loadContext:completion:;
+ (void)writeDataToDiskWithData:relativeFilePath:completion:;
+ (void)updateMessageLocalExtWithMessageId:conversationId:filePathInfo:completion:;
+ (int)getCoverFileTypeWithContextMessageType:;
+ (void)updateAttachmentDataInfoWithContext:loadContext:dbModel:fileType:completion:;
+ (int)getAssetFileTypeWithContextMessageType:;
+ (void)updateVideoFirstFrameWithContext:loadContext:dbModel:completion:;
+ (void)updateVideoAttachmentWithContext:loadContext:dbModel:completion:;
+ (void)updateImageAttachmentWithContext:loadContext:dbModel:completion:;
+ (void)updateVideoCoverWithContext:loadContext:completion:;
@end
