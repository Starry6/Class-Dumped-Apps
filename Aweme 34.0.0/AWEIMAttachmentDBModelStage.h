@interface AWEIMAttachmentDBModelStage : AWEIMStage
- (void)p_initDBModelWithAttachment:index:dbModelArray:completion:;
- (void)p_storeThumbnailIfNeedWithAttachmentObject:dbModel:;
- (void)p_moveFileToSendDirWithDBModel:attachment:writeFlags:;
- (BOOL)p_isSupportGenerateThumbnailWithFileType:;
- (void)p_insertThumbnailDBModel:needWriteData:absoluteFilePath:;
- (BOOL)p_writeDataToDiskWithMessageId:data:absoluteFilePath:;
- (void)start;
@end
