@interface MFAttachmentComposeManager : MFAttachmentManager
- (id)init;
- (void).cxx_destruct;
- (void)_fetchInvocationCallUsingBlock:;
- (id)_queueForAttachment:;
- (id)_fetchDataForAttachment:withProvider:request:syncLock:;
- (void)_callProgressBlockForAttachmentURL:withBytes:expectedSize:;
- (id)attachmentsForContext:;
- (id)attachmentForCID:;
- (id)_providerForURL:;
- (id)_composeAttachmentDataProviderForContext:;
- (id)attachmentForData:mimeType:fileName:contentID:context:;
- (id)attachmentForItemProvider:mimeType:fileName:contentID:context:;
- (id)_contentIDWithoutBracket:;
- (void)loadAttachmentURL:forContextID:;
- (BOOL)updateAttachment:withNewData:;
- (void)removeAttachmentForURL:;
- (void)recordPasteboardAttachmentsForURLs:forContextID:;
- (void)recordUndoAttachmentsForURLs:forContextID:;
@end
