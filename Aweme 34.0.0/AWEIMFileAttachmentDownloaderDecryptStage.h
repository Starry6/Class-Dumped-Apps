@interface AWEIMFileAttachmentDownloaderDecryptStage : AWEIMStage
- (void)p_handleChunkDecryptResult:outputPath:;
- (void)start;
@end
