@interface AWEIMAttachmentOnScreenStage : AWEIMStage
- (void)createUploadFileViewModelIfNeed;
- (void)p_updateMessageIDWithDBModelArray:index:messageID:con:completion:;
- (void)start;
@end
