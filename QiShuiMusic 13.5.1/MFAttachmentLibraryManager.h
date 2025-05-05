@interface MFAttachmentLibraryManager : MFAttachmentComposeManager
- (id)_dataProviderForAttachmentURL:error:;
- (void)removeProviderForBaseURL:;
- (id)initWithPrimaryLibrary:;
- (id)attachmentsForMessage:withSchemes:;
@end
