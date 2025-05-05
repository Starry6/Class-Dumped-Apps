@interface NoteAttachmentObject : NSManagedObject
@property (nonatomic) NSString contentID;
@property (nonatomic) NSString filename;
@property (nonatomic) NSString mimeType;
@property (nonatomic) NoteObject note;
- (void)prepareForDeletion;
- (id)attachmentDataFileURLWithError:;
- (BOOL)persistAttachmentData:error:;
- (id)attachmentDataWithError:;
+ (id)attachmentDirectoryURLForAttachmentObjectID:error:;
+ (id)attachmentDirectoryPathForAttachmentObjectID:error:;
+ (BOOL)migrateAttachmentRelatedFilesInContext:error:;
+ (BOOL)migrateFileForAttachment:toCurrentAttachmentPathWithError:;
+ (BOOL)applyFileAttributesForAttachment:error:;
@end
