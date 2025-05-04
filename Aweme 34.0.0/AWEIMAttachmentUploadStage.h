@interface AWEIMAttachmentUploadStage : AWEIMStage
@property (nonatomic) FBKVOController uploaderKVO;
- (void)setUploaderKVO:;
- (void)p_realDoUpload:dbModelArray:content:;
- (void)p_updateContent:response:content:dbModel:;
- (void)p_updateLocalFilePath:fileType:cachePath:;
- (void)p_trackUploadFileObj:withViewModel:;
- (BOOL)p_shouldGenerateInlinePic;
- (void)p_asyncGenerateHmacSHA256WithKey:oid:content:complete:;
- (void)p_asyncGenerateInlineDataComplete:;
- (void)p_trackSendMessageResponseError;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileID:quickData:MD5:completion:;
- (id)uploaderKVO;
- (void)moveOrCopyFromPath:toPath:complete:;
- (BOOL)moveOrCopyFromPath:toPath:;
- (void)p_uploadErrorContentLog:messageType:;
- (id)p_getEnterFromWithAweType:;
- (id)p_getVideoAttachMent;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)start;
@end
