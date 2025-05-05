@interface MFAttachmentUtilities : NSObject
+ (id)temporaryDirectory;
+ (id)_temporaryDirectoryUniqueURL;
+ (id)temporaryFileURLWithExtension:;
+ (id)writeData:toTemporaryFileURLWithFileName:;
+ (id)mimeTypeForFileName:;
+ (BOOL)shouldCreatePlaceholderAttachmentForAttachmentWithSize:;
+ (id)makeAttachmentPlaceholder:fileSize:mimeType:contentID:;
+ (id)securityScopeForFileURL:;
@end
