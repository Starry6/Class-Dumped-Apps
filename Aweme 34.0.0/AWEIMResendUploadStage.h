@interface AWEIMResendUploadStage : AWEIMStage
@property (nonatomic) FBKVOController uploaderKVO;
- (void)setUploaderKVO:;
- (id)uploaderKVO;
- (void)moveOrCopyFromPath:toPath:complete:;
- (BOOL)moveOrCopyFromPath:toPath:;
- (id)quickDataForOriginData:;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileIDArray:quickDataDict:message:content:conversation:;
- (BOOL)p_shouldAddInlinePic;
- (void)p_asyncGenerateInlineDataWithData:complete:;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileID:quickData:message:completion:;
- (void)p_asyncGenerateHmacSHA256WithKey:oid:messageContent:content:complete:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)start;
@end
