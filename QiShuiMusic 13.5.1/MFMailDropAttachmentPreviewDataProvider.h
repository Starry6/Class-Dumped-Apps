@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider
- (id)storageLocationForAttachment:withMessage:;
- (void)fetchDataForAttachment:consumer:progress:completion:;
+ (id)fullResolutionStorageLocationForAttachmentWithMimePart:withMessage:;
+ (id)fullResolutionAttachmentForAttachment:;
+ (id)fullResolutionAttachmentURLForAttachmentURL:;
@end
